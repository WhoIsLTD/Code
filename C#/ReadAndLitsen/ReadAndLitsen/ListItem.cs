using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ReadAndLitsen
{
    public class ListItem
    {
        public ListItem()
        {
            item = new List<Item>();
        }
        public List<Item> item { get; set; }
    }
}
