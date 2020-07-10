using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Provider
{
    public class QuestionInfo
    {
        public QuestionInfo()
        {
            Answers = new List<AnswerInfo>();
        }
        public string Value { get; set; }
        public int SelectIndex { get; set; }
        public string MediaType { get; set; }
        public string MediaUrl { get; set; }
        public List<AnswerInfo> Answers { get; set; }
    }
}
