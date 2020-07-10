using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Provider.Item
{
    public class QuizInfo : ItemInfo
    {
        public QuizInfo()
        {
            Question = new QuestionInfo();
        }
        public string Font { get; set; }
        public int Size { get; set; }
        public string Color { get; set; }
        public bool Bold { get; set; }
        public bool Underline { get; set; }
        public bool Align { get; set; }
        public int Leading { get; set; }
        public QuestionInfo Question { get; set; }
    }
}
