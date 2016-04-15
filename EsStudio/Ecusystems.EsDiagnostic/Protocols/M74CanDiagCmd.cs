using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Ecusystems.Common;

namespace Ecusystems.EsDiagnosticModule.Protocols
{
    internal static class M74CanDiagCmd
    {
        /// <summary>
        /// PID - 22. 1, 2, 3, 5, 6, 7, 8, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 9A, A0, A1, A2, A3, E0, E1, 80, A, B
        /// </summary>
        public static readonly RequestObject GetCommonParameters = new RequestObject(new byte[] { 0x22, 0x00, 0x01, 0x69 }, new byte[] { 0x62, 0x00, 0x01, 0x69 });
    }
}
