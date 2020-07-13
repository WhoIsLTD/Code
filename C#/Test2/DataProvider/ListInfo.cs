using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataProvider
{
    public class ListInfo
    {
        public ListInfo()
        {
            ListAnswer = new ListAnwer();
        }
        public string Value { get; set; }
        public string MediaType { get; set; }
        public string MediaUrl { get; set; }
        public ListAnwer ListAnswer { get; set; }
    }

}
