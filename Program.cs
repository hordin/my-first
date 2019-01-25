using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace hanza122
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("hola! what do to 1) addition 2) multiplication 3) subraction 4) division 5) squre 6) cube");
            int choice =Convert.ToInt32(Console.ReadLine());

            if (choice == 1)
            {
                Console.Write("enter num one");
                int n1 = Convert.ToInt32(Console.ReadLine());
                Console.Write("enter num two");
                int n2 = Convert.ToInt32(Console.ReadLine());
                int n3 = n1 + n2;
                Console.Write("the no. is " + n3);

            }

            if (choice == 2)
            {
                Console.Write("enter num one");
                int n1 = Convert.ToInt32(Console.ReadLine());
                Console.Write("enter num two");
                int n2 = Convert.ToInt32(Console.ReadLine());
                int n3 = n1 * n2;
                Console.Write("the no. is " + n3);

            }

            if (choice == 3)
            {
                Console.Write("enter num one");
                int n1 = Convert.ToInt32(Console.ReadLine());
                Console.Write("enter num two");
                int n2 = Convert.ToInt32(Console.ReadLine());
                int n3 = n1 - n2;
                Console.Write("the no. is " + n3);

            }

            if (choice == 4)
            {
                Console.Write("enter num one");
                int n1 = Convert.ToInt32(Console.ReadLine());
                Console.Write("enter num two");
                int n2 = Convert.ToInt32(Console.ReadLine());
                int n3 = n1 / n2;
                Console.Write("the no. is " + n3);

            }

            if (choice == 5)
            {
                Console.Write("enter num");
                int n = Convert.ToInt32(Console.ReadLine());
                int s = n * n;
                Console.Write("the no. is " + s);

            }

            if (choice == 6)
            {
                Console.Write("enter num");
                int n = Convert.ToInt32(Console.ReadLine());
                int s = n * n * n;
                Console.Write("the no. is " + s);

            }
        }
    }
}
