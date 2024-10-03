sing System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment1_Q8
{

    class Student
    {
        // Data members for basic details
        protected string name;
        protected int age;
        protected string address;
        protected string mobileNumber;

        // Method to get basic details of the student
        public virtual void getData()
        {
            Console.Write("Enter Student Name: ");
            name = Console.ReadLine();

            Console.Write("Enter Age: ");
            age = int.Parse(Console.ReadLine());

            Console.Write("Enter Address: ");
            address = Console.ReadLine();

            Console.Write("Enter Mobile Number: ");
            mobileNumber = Console.ReadLine();
        }

        // Method to print basic details of the student
        public virtual void printData()
        {
            Console.WriteLine("\nStudent Details:");
            Console.WriteLine($"Name: {name}");
            Console.WriteLine($"Age: {age}");
            Console.WriteLine($"Address: {address}");
            Console.WriteLine($"Mobile Number: {mobileNumber}");
        }
    }

    // Subclass to maintain student mark details
    class StudentMark : Student
    {
        // Data members for mark details
        private int marks;

        // Override method to get student marks
        public override void getData()
        {
            // Call base method to get basic details
            base.getData();

            Console.Write("Enter Marks: ");
            marks = int.Parse(Console.ReadLine());
        }

        // Override method to print student marks
        public override void printData()
        {
            // Call base method to print basic details
            base.printData();

            Console.WriteLine($"Marks: {marks}");
            Console.WriteLine($"Grade: {FindGrade()}");
        }

        // Method to determine grade based on marks
        private string FindGrade()
        {
            if (marks >= 90) return "A";
            else if (marks >= 75) return "B";
            else if (marks >= 60) return "C";
            else if (marks >= 50) return "D";
            else return "F";
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            // Create an instance of the StudentMark class
          StudentMark studentMark = new StudentMark();

            // Get student details and marks
            studentMark.getData();

            // Print student details and marks
            studentMark.printData();

            // Wait for user input before closing
            Console.WriteLine("\nPress any key to exit...");
            Console.ReadKey();
        }
    }
}

