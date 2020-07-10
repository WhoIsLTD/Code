using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Provider.Item
{
    public class Item
    {
        public Item()
        {
            Id = "";
            Name = "";
            Rotation = 0;
            ItemInfo = new List<ItemInfo>();
            IsRemove = false;
        }
        public string Id { get; set; }
        public string Name { get; set; }
        public string Type { get; set; }
        public double X { get; set; }
        public double Y { get; set; }
        public double Width { get; set; }
        public double Height { get; set; }
        public double ScaleX { get; set; }
        public double ScaleY { get; set; }
        public int Rotation { get; set; }
        public List<ItemInfo> ItemInfo { get; set; }
        public LinkInfo Link { get; set; }
        public bool IsRemove { get; set; }
        //public AnimationInfo Animation { get; set; }
        //public ImageInfo Image { get; set; }
    }
}
