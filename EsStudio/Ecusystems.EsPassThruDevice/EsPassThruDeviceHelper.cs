using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using J2534DotNet;

namespace Ecusystems.EsPassThruDevice
{
    public static class EsPassThruDeviceHelper
    {
        public static List<J2534Device> GetAvailableDevices()
        {
            return J2534Detect.ListDevices();
        }

        public static Exception GetPassThruException(this J2534Extended passThru)
        {
            var error = Marshal.AllocHGlobal(80);

            try
            {
                passThru.PassThruGetLastError(error);
                return new Exception(error.AsString());
            }
            finally
            {
                Marshal.FreeHGlobal(error);
            }            
        }
    }
}
