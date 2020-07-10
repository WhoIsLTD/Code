using System;
using System.Collections.Generic;
using System.Text;

namespace First
{
    class Class1
    {
        public virtual void InTT()
        {
            Console.WriteLine("Hello!!!");
        }
    }
    class Class3 : Class1
    {
        public override void InTT()
        {
            Console.WriteLine("thay bang class 2");
        }

    }
    class Class4 : Class1
    {
        public override void InTT()
        {
            base.InTT();
            Console.WriteLine("lol");
        }

    }
}
