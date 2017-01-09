using System.Threading;
using System.Threading.Tasks;
using EsStudio.Common;
using Microsoft.Practices.Unity;
using Prism.Logging;
using Prism.Modularity;

namespace Ecusystems.EsDiagnosticModule
{
    public class EsDiagnosticModule: IModule
    {
        private readonly EsPassThruDevice.EsPassThruDevice passThruDevice;
        private readonly ILoggerFacade logger;
        private Task mainTask;
        private readonly IUnityContainer container;

        public EsDiagnosticModule(IUnityContainer container)
        {
            this.container = container;
            logger = container.Resolve<ILoggerFacade>();
            passThruDevice = container.Resolve<EsPassThruDevice.EsPassThruDevice>();
        }

        public void StartDiagnostic(CancellationToken cancellationToken)
        {
            if (!passThruDevice.Connected)
            {
                passThruDevice.Open();
                passThruDevice.Connect();
            }

            if (mainTask == null)
            {
                mainTask = Task.Run(() => DiagnosticRequest(cancellationToken), cancellationToken);
                mainTask.ConfigureAwait(false);
            }
            else
            {
                if (mainTask.Status == TaskStatus.Running)
                {
                    logger.Log("EsDiagnosticModule-StartDiagnostic start already running diagnostic error", Category.Warn, Priority.Low);
                }
                else
                {
                    mainTask.Start();
                }
            }

            logger.Log("EsDiagnosticModule-StartDiagnostic start diagnostic", Category.Info, Priority.Low);
        }

        public void StopDiagnostic(CancellationToken cancellationToken)
        {
            logger.Log("EsDiagnosticModule-StopDiagnostic stop diagnostic", Category.Info, Priority.Low);
            mainTask.Wait(cancellationToken);

            if (passThruDevice.Connected) return;

            passThruDevice.Disconnect();
            passThruDevice.Close();
        }

        private void DiagnosticRequest(CancellationToken cancellationToken)
        {
            while (!cancellationToken.IsCancellationRequested)
            {
                //passThruDevice.WriteMsgs();
            }
        }

        public void Initialize()
        {
            var hostService = container.Resolve<IHostService>();

            //hostService.PublishMenuLinkGroup();
        }
    }
}
