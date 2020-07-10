using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataProvider
{
    public class ListAnwer
    {
        public ListAnwer()
        {
            Answers = new List<AnswerInfo>();
        }
        public string Value { get; set; }
        public List<AnswerInfo> Answers { get; set; }
    }
}
