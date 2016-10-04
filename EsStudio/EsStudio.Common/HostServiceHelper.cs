using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Input;

namespace EsStudio.Common
{
    public static class HostServiceHelper
    {
        public static void PublishTitleLink(this IHostService source, ICommand command)
        {
            source.PublishTitleLink(new[] { command });
        }

        public static void PublishMenuLinkGroup(this IHostService source, ICommand command)
        {
            source.PublishMenuLinkGroup(new[] {command});
        }
    }
}
