using System.Threading;
using System.Threading.Tasks;
using Prism.Logging;
using Prism.Modularity;

namespace Ecusystems.EsDiagnosticModule
{
    public class EsDiagnosticModule: IModule
    {
        private readonly EsPassThruDevice.EsPassThruDevice passThruDevice;
        private readonly ILoggerFacade logger;
        private Task mainTask;

        public EsDiagnosticModule(ILoggerFacade logger, EsPassThruDevice.EsPassThruDevice passThruDevice)
        {
            this.logger = logger;
            this.passThruDevice = passThruDevice;
        }

        public void StartDiagnostic(CancellationToken cancellationToken)
        {
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
        }

        private void DiagnosticRequest(CancellationToken cancellationToken)
        {
            
        }

        public void Initialize()
        {
        }
    }
}
