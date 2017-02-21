using System;
using System.ComponentModel;
using System.Runtime.InteropServices;
using System.Text;
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
        public string ApiVersion { get; private set; }
        public string DllVersion { get; private set; }
        public string FirmwareVersion { get; private set; }

        public EsPassThruDevice(J2534Device j2534Device)
        {
            J2534Device = j2534Device;
            PassThruInterface = new J2534Extended();
            if (!PassThruInterface.LoadLibrary(J2534Device))
                throw new Exception($"Error load pass thru library: {J2534Device.FunctionLibrary}. Error: {new Win32Exception(Marshal.GetLastWin32Error()).Message}");
        }

        public void Open()
        {
            var name = J2534Device.Name;
            var ptr = Marshal.AllocHGlobal(name.Length);

            try
            {
                var status = PassThruInterface.PassThruOpen(J2534Device.Name, ref deviceId);

                ThrowIfError(status);

                Opened = true;
            }
            finally
            {
                Marshal.FreeHGlobal(ptr);
            }
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

            ThrowIfError(status);

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

        public void ReadInfo()
        {
            if (!Connected) throw new Exception("Pass thru device not connected");

            var firmwareVersion = new StringBuilder(80); 
            var dllVersion = new StringBuilder(80); 
            var apiVersion = new StringBuilder(80); 

            var status = PassThruInterface.PassThruReadVersion(DeviceId, firmwareVersion, dllVersion, apiVersion);

            FirmwareVersion = firmwareVersion.ToString();
            DllVersion = dllVersion.ToString();
            ApiVersion = apiVersion.ToString();

            ThrowIfError(status);
        }

        public int ReadBatteryVoltage()
        {
            int voltage = 0;
            var status = PassThruInterface.ReadBatteryVoltage(DeviceId, ref voltage);

            return voltage;
        }

        private void ThrowIfError(J2534Err status)
        {
            if (status != J2534Err.STATUS_NOERROR)
            {
                throw PassThruInterface.GetPassThruException();
            }
        }

        public void ClearRxBuffer()
        {
            if (!Connected) throw new Exception("Pass thru device not connected");

            PassThruInterface.ClearRxBuffer(channelId);
        }

        public unsafe void WriteMsgs(int timeout, params PassThruMsg[] msgs)
        {
            int numMsgs = 1;

            fixed (void* ptr = &msgs[0])
            {
                var status = PassThruInterface.PassThruWriteMsgs(channelId, new IntPtr(ptr), ref numMsgs, timeout);

                ThrowIfError(status);
            }
        }

        public unsafe PassThruMsg[] ReadMsgs(int timeout, int numMsgs)
        {
            var msgs = new PassThruMsg[numMsgs];

            fixed (void* ptr = &msgs[0])
            {
                var status = PassThruInterface.PassThruReadMsgs(channelId, new IntPtr(ptr), ref numMsgs, timeout);

                ThrowIfError(status);
            }

            return msgs;
        }
    }
}
