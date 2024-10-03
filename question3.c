using System;
using System.Text.RegularExpressions;

class Validation
{
    static void Main()
    {
        // Get mobile number input from the user
        Console.Write("Enter your mobile number (format: 1234_567890): ");
        string mobileNumber = Console.ReadLine();

        // Define the validation regex pattern
        string pattern = @"^\d{4}_\d{6}$";

        // Check if the mobile number is valid
        if (Regex.IsMatch(mobileNumber, pattern))
        {
            Console.WriteLine("Valid mobile number.");
        }
        else
        {
            Console.WriteLine("Invalid mobile number. Please enter a valid mobile number in the format 1234_567890.");
        }
    }
}
