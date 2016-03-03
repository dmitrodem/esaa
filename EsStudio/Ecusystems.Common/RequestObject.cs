using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Ecusystems.Common
{
    public class RequestObject
    {
        public byte[] Request { get; }
        public byte[] Response { get; }

        public RequestObject(byte[] request, byte[] response)
        {
            Request = request;
            Response = response;
        }
    }
}
