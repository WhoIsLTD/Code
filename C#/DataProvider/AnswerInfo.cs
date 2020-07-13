using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataProvider
{
    public class AnswerInfo
    {
        public AnswerInfo()
        {
            Type = "text";
        }
        public string Id { get; set; }
        public string Type { get; set; }
        public string Value { get; set; }
        public bool Checked { get; set; }
    }
}
