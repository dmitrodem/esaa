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

            //TestEsDiagnosticModule();

            TestPassThruDevice();

            Console.ReadLine();
        }

        private static void TestPassThruDevice()
        {
            try
            {
                var path = @"C:\Program Files (x86)\XHorse Electronics\MVCI Driver for TOYOTA TIS\MVCI32.dll";
                //path = @"D:\git\esaa\j2534\PassthruEMUv1.03\04.04\j25341emu.dll";
                var dll = NativeMethods.LoadLibrary(path);

                var device = unityContainer.Resolve<EsPassThruDevice>();
                device.Open();
                Console.WriteLine($"Open device: {device.J2534Device.Name}");
                device.Connect();
                Console.WriteLine($"Connect device: {device.J2534Device.Name}");

                device.ReadInfo();
                Console.WriteLine($"Firmware: {device.FirmwareVersion}. DllVersion: {device.DllVersion}. ApiVersion: {device.ApiVersion}");

                Console.WriteLine($"Battery voltage: {(device.ReadBatteryVoltage() / 1000.0):#0.000} v");

                device.Disconnect();
                device.Close();
            }
            catch (Exception e)
            {
                Console.WriteLine(e.ToString());
            }
        }

        private static void InitUnity()
        {
            Console.WriteLine("Find PassThru devices:");
            var passThruDevices = J2534Detect.ListDevices();
            passThruDevices.ForEach(device => Console.Write(device.ToString() + " "));
            Console.WriteLine();

            unityContainer = new UnityContainer();
            unityContainer.RegisterInstance(passThruDevices.Last());
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
