using System;
using J2534DotNet;

namespace Ecusystems.EsPassThruDevice
{
    public class EsPassThruDevice
    {
        private ProtocolID protocolID = ProtocolID.ISO15765;
        private int deviceId;
        private int channelId;

        public int DeviceId => deviceId;
        public int ChannelId => channelId;

        public J2534Device J2534Device { get; }        
        public J2534Extended PassThruInterface { get; }        
        public bool Opened { get; private set; }
        public bool Connected { get; private set; }

        public EsPassThruDevice(J2534Device j2534Device)
        {
            J2534Device = j2534Device;
            PassThruInterface = new J2534Extended();
            if (!PassThruInterface.LoadLibrary(J2534Device))
                throw new Exception("Error load pass thru library: " + J2534Device.FunctionLibrary);
        }

        public void Open()
        {
            var status = PassThruInterface.PassThruOpen(IntPtr.Zero, ref deviceId);

            if (status != J2534Err.STATUS_NOERROR)
            {
                throw PassThruInterface.GetPassThruException();
            }

            Opened = true;
        }

        public void Close()
        {
            if (Connected)
            {
                Disconnect();
            }

            if (Opened)
            {
                PassThruInterface.PassThruClose(DeviceId);
            }

            Opened = false;            
        }

        public void Connect()
        {
            if (!Opened) throw new Exception("Pass thru device not opened");
            var status = PassThruInterface.PassThruConnect(DeviceId, protocolID, ConnectFlag.CAN_29BIT_ID, BaudRate.CAN_500000, ref channelId);

            if (status != J2534Err.STATUS_NOERROR)
            {
                throw PassThruInterface.GetPassThruException();
            }

            Connected = true;
        }

        public void Disconnect()
        {
            if (Connected)
            {
                PassThruInterface.PassThruDisconnect(ChannelId);
            }

            Connected = false;
        }

        public void ClearRxBuffer()
        {
            if (!Connected) throw new Exception("Pass thru device not connected");

            PassThruInterface.ClearRxBuffer(channelId);
        }

        public void WriteMsgs(ref PassThruMsg msg, int timeout)
        {
            int numMsgs = 1;

            var status = PassThruInterface.PassThruWriteMsgs(channelId, msg.ToIntPtr(), ref numMsgs, timeout);

            if (status != J2534Err.STATUS_NOERROR)
            {
                throw PassThruInterface.GetPassThruException();
            }
        }
    }
}
