using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment1_Q7
{
    class Vector
    {
        public int X { get; set; }
        public int Y { get; set; }

        // Constructor to initialize vector components
        public Vector(int x, int y)
        {
            X = x;
            Y = y;
        }

        // Overload the '+' operator to add two vectors
        public static Vector operator +(Vector v1, Vector v2)
        {
            return new Vector(v1.X + v2.X, v1.Y + v2.Y);
        }

        // Method to display the vector
        
    }
    class Program
    {
        static void Main(string[] args)
        {
            // Input first vector
          Console.WriteLine("Enter the first vector:");
            Console.Write("X1: ");
            int x1 = int.Parse(Console.ReadLine());
            Console.Write("Y1: ");
            int y1 = int.Parse(Console.ReadLine());
            Vector vector1 = new Vector(x1, y1);

            // Input second vector
            Console.WriteLine("Enter the second vector:");
            Console.Write("X2: ");
            int x2 = int.Parse(Console.ReadLine());
            Console.Write("Y2: ");
            int y2 = int.Parse(Console.ReadLine());
            Vector vector2 = new Vector(x2, y2);

            // Add the vectors using overloaded '+' operator
            Vector sumVector = vector1 + vector2;

            // Display the result
            Console.WriteLine("\nSum of the vectors:");
            Console.WriteLine($"{sumVector.X}  {sumVector.Y}");

            // Wait for user input before closing
            Console.WriteLine("\nPress any key to exit...");
            Console.ReadKey();

        }
    }
}
