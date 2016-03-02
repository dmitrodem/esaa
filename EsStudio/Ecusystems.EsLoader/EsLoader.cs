using System;
using System.IO;
using System.Threading.Tasks;
using Ecusystems.Common;

namespace Ecusystems.EsLoader
{
    public class EsLoader
    {
        private readonly EsPassThruDevice.EsPassThruDevice passThruDevice;

        public EsLoader(EsPassThruDevice.EsPassThruDevice passThruDevice)
        {
            this.passThruDevice = passThruDevice;
        }

        public Stream ReadFirmware(StateObject stateObject)
        {
            return null;
        }

        public async Task<Stream> ReadFirmwareAsync(StateObject stateObject)
        {
            return await Task<Stream>.Factory.StartNew(InternalReadFirmware, stateObject).ConfigureAwait(false);
        }

        internal Stream InternalReadFirmware(object stateObject)
        {
            return ReadFirmware((StateObject) stateObject);
        }      

        public async Task WriteFirmwareAsync(StateObject stateObject, Stream firmware)
        {
            await Task.Factory.StartNew(InternalWriteFirmware, new Tuple<StateObject, Stream>(stateObject, firmware)).ConfigureAwait(false);
        }

        public void WriteFirmware(StateObject stateObject, Stream firmware)
        {
            
        }

        private void InternalWriteFirmware(object writeArgs)
        {
            var args = (Tuple<StateObject, Stream>) writeArgs;
            WriteFirmware(args.Item1, args.Item2);
        }
    }
}
