using System;
using System.Collections.Generic;
using System.Text;
using J2534DotNet;

namespace Ecusystems.EsPassThruDevice
{
    public static class EsPassThruDeviceHelper
    {
        private static readonly Lazy<StringBuilder> ErrorBuffer = new Lazy<StringBuilder>();

        public static List<J2534Device> GetAvailableDevices()
        {
            return J2534Detect.ListDevices();
        }

        public static Exception GetPassThruException(this J2534Extended passThru)
        {
            var error = ErrorBuffer.Value;

            passThru.PassThruGetLastError(error);
            return new Exception(error.ToString());           
        }
    }
}
