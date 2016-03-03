using System;
using Ecusystems.Common;

namespace Ecusystems.EsLoader.Protocols
{
    internal static class M74Commands
    {
        /// <summary>
        /// REQ: 01 xx 96 69
        /// RESP: FF 00 xx 69 96 69
        /// </summary>
        public static readonly RequestObject BootstrapMagic = new RequestObject(new byte[] {0x01, 0x00, 0x96, 0x69}, new byte[] {0xff, 0x00, 0x00, 0x69, 0x96, 0x69});
        /// <summary>
        /// REQ: 0x01 xx 0x02 xx
        /// RESP: FF 00 xx FE 01 00
        /// </summary>
        public static readonly RequestObject BootstrapStartSession = new RequestObject(new byte[] { 0x01, 0x00, 0x02, 0x00 }, new byte[] { 0xff, 0x00, 0x00, 0xfe, 0x01, 0x00 });

        //public static readonly RequestObject BootstrapStopSession = new RequestObject(new byte[] { 0x07, 0x00, 0x02, 0x00 }, new byte[] { 0xff, 0x00, 0x00, 0xfe, 0x01, 0x00 });
    }
}
