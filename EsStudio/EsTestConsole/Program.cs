using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading;
using Ecusystems.EsDiagnosticModule;
using Ecusystems.EsPassThruDevice;
using J2534DotNet;
using Microsoft.Practices.Unity;
using Prism.Logging;

namespace EsTestConsole
{
    class Program
    {
        private static UnityContainer unityContainer;

        static void Main(string[] args)
        {
            var entryAssembly = Assembly.GetEntryAssembly();

            Console.WriteLine($"ecusystems.ru EsStudio modules test console. V-{entryAssembly.GetName().Version}-{File.GetCreationTime(entryAssembly.Location)}");
            Console.WriteLine();

            InitUnity();            

            TestEsDiagnosticModule();

            Console.ReadLine();
        }

        private static void InitUnity()
        {
            Console.WriteLine("Find PassThru devices:");
            var passThruDevices = J2534Detect.ListDevices();
            passThruDevices.ForEach(device => Console.Write(device.ToString() + " "));
            Console.WriteLine();

            unityContainer = new UnityContainer();
            unityContainer.RegisterInstance(passThruDevices[0]);
            unityContainer.RegisterInstance<IUnityContainer>(unityContainer);

            unityContainer.RegisterType<EsPassThruDevice>();
            unityContainer.RegisterType<EsDiagnosticModule>();
            unityContainer.RegisterType<ILoggerFacade, DebugLogger>();
        }

        private static void TestEsDiagnosticModule()
        {
            var diagModule = unityContainer.Resolve<EsDiagnosticModule>();
            var cts = new CancellationTokenSource();
            diagModule.StartDiagnostic(cts.Token);

            Thread.Sleep(5000);
            cts.Cancel();
        }
    }
}
