
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment1_Q9
{

    class Employee
    {
        // Data members for employee details and salary components
        private int empno;
        private string empname;
        private int job_catg;
        private decimal basic;
        private decimal hra;
        private decimal da;
        private decimal pf;
        private decimal loan;
        private decimal netSalary;

        // Constructor to initialize salary components
        public Employee()
        {
            // Initialization of salary components based on job category will be done in calculateSalary()
            hra = 0;
            da = 0;
            pf = 0;
            loan = 0;
            netSalary = 0;
        }

        // Method to get employee details
        public void Input()
        {
            Console.Write("Enter Employee Number: ");
            empno = int.Parse(Console.ReadLine());

            Console.Write("Enter Employee Name: ");
            empname = Console.ReadLine();

            Console.Write("Enter Job Category (1 for Table-I, 2 for Table-II): ");
            job_catg = int.Parse(Console.ReadLine());
        }

        // Method to calculate salary based on job category
        public void CalculateSalary()
        {
            if (job_catg == 1)
            {
                // Table-I calculations
                basic = 8000;
                hra = 0.10m * basic;
                da = 0.20m * basic;
                loan = 300;
                pf = 500;
            }
            else if (job_catg == 2)
            {
                // Table-II calculations
                basic = 15000;
                hra = 0.20m * basic;
                da = 0.30m * basic;
                loan = 600;
                pf = 1000;
            }
            else
            {
                Console.WriteLine("Invalid Job Category!");
                return;
            }

            // Calculate net salary
            netSalary = basic + hra + da - (pf + loan);
        }

        // Method to display employee details and salary
        public void Display()
        {
            Console.WriteLine("\nEmployee Details:");
            Console.WriteLine($"Employee Number: {empno}");
            Console.WriteLine($"Employee Name: {empname}");
            Console.WriteLine($"Job Category: {job_catg}");
            Console.WriteLine($"Basic Salary: Rs. {basic}");
            Console.WriteLine($"HRA: Rs. {hra}");
            Console.WriteLine($"DA: Rs. {da}");
            Console.WriteLine($"Loan Deduction: Rs. {loan}");
            Console.WriteLine($"PF Deduction: Rs. {pf}");
            Console.WriteLine($"Net Salary: Rs. {netSalary}");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            // Create an instance of the Employee class
            Employee employee = new Employee();

            // Get employee details
            employee.Input();

            // Calculate salary
            employee.CalculateSalary();

            // Display employee details and net salary
            employee.Display();

            // Wait for user input before closing
            Console.WriteLine("\nPress any key to exit...");
            Console.ReadKey();
        }
    }
}

