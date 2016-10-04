using System;
using System.Windows.Input;

namespace EsStudio.Common
{
    public interface IHostService
    {
        void PublishTitleLink(ICommand[] command);
        void PublishMenuLinkGroup(ICommand[] command);
    }
}
