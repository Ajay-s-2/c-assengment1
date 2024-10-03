
System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment1_Q6
{
    class Patient
    {
        // Data members to store patient information
        private string name;
        private DateTime dateOfAdmission;
        private int age;
        private string disease;
        private DateTime dateOfDischarge;
        private decimal totalBillsPaid;

        // Method to get patient information from the user
        public void GetPatientInfo()
        {
            Console.Write("Enter Patient Name: ");
            name = Console.ReadLine();

            Console.Write("Enter Date of Admission (yyyy-mm-dd): ");
            dateOfAdmission = DateTime.Parse(Console.ReadLine());

            Console.Write("Enter Age of Patient: ");
            age = int.Parse(Console.ReadLine());

            Console.Write("Enter Disease: ");
            disease = Console.ReadLine();

            Console.Write("Enter Date of Discharge (yyyy-mm-dd): ");
            dateOfDischarge = DateTime.Parse(Console.ReadLine());

            Console.Write("Enter Total Bills Paid: ");
            totalBillsPaid = decimal.Parse(Console.ReadLine());
        }

        // Method to display patient information
        public void DisplayPatientInfo()
        {
            Console.WriteLine("\nPatient Details:");
            Console.WriteLine($"Name: {name}");
            Console.WriteLine($"Date of Admission: {dateOfAdmission.ToShortDateString()}");
            Console.WriteLine($"Age: {age}");
            Console.WriteLine($"Disease: {disease}");
            Console.WriteLine($"Date of Discharge: {dateOfDischarge.ToShortDateString()}");
            Console.WriteLine($"Total Bills Paid: {totalBillsPaid:C}");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Patient patient = new Patient();

            // Get patient information
            patient.GetPatientInfo();

            // Display patient information
            patient.DisplayPatientInfo();

            // Wait for user input before closing
            Console.WriteLine("\nPress any key to exit...");
            Console.ReadKey();

        }
    }
}
