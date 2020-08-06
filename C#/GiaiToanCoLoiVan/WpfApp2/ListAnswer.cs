using DataProvide;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataProvide
{
    public class ListAnswer
    {
        public ListAnswer()
        {
            Answers = new List<Answer>();
        }
        public List<Answer> Answers { get; set; }
        public string Values { get; set; } 
    }
}
