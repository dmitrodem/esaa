using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;

namespace Ecusystems.Common
{
    public class StateObject
    {
        public CancellationToken CancellationToken { get; private set; }
        public int ProgressMax { get; set; }
        public int ProgressValue { get; set; }

        public StateObject(CancellationToken ct)
        {
            CancellationToken = ct;
        }
    }
}
