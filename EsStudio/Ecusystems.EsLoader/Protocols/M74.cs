using J2534DotNet;

namespace Ecusystems.EsLoaderModule.Protocols
{
    internal class M74
    {
        private readonly EsPassThruDevice.EsPassThruDevice passThruDevice;
        private readonly ProtocolID protocolId = ProtocolID.ISO15765;
        private readonly TxFlag txFlag = TxFlag.ISO15765_FRAME_PAD;        
        private int timeout = 100;

        public M74(EsPassThruDevice.EsPassThruDevice passThruDevice)
        {
            this.passThruDevice = passThruDevice;
        }

        public void Init()
        {
            passThruDevice.ClearRxBuffer();

            var msg = CreateMsg(M74Commands.BootstrapMagic.Request);
            passThruDevice.WriteMsgs(timeout, msg);
            var initRespMsg = passThruDevice.ReadMsgs(timeout, 1);
        }

        private PassThruMsg CreateMsg(params byte[] data)
        {
            return new PassThruMsg(protocolId, txFlag, data);
        }
    }
}
