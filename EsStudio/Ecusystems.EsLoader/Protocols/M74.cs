using System;
using J2534DotNet;

namespace Ecusystems.EsLoader.Protocols
{
    internal class M74
    {
        private readonly EsPassThruDevice.EsPassThruDevice passThruDevice;
        private readonly ProtocolID protocolId = ProtocolID.ISO15765;
        private readonly TxFlag txFlag = TxFlag.ISO15765_FRAME_PAD;
        private readonly byte[] InitMsg = {0x01, 0x96, 0x69, 0x00 };
        private int timeout = 100;

        public M74(EsPassThruDevice.EsPassThruDevice passThruDevice)
        {
            this.passThruDevice = passThruDevice;
        }

        public void Init()
        {
            passThruDevice.ClearRxBuffer();

            var initMsg = CreateMsg(InitMsg);
            passThruDevice.WriteMsgs(ref initMsg, timeout);
        }

        private PassThruMsg CreateMsg(params byte[] data)
        {
            return new PassThruMsg(protocolId, txFlag, data);
        }
    }
}
