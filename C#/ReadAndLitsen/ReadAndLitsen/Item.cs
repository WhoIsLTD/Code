using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ReadAndLitsen
{
    public class Item
    {
        public Item()
        {
            Value = "";
        }
        public string Value { get; set;}
        public int Length { get; set; }
        public string Link { get; set; }
        public string Audio { get; set; }

    }
}
