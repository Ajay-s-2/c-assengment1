using System;

class Program
{
    static void Main()
    {
        // Get the user's age
        Console.Write("Enter your age: ");
        int age = int.Parse(Console.ReadLine());

        // Get the user's 10th std percentage
        Console.Write("Enter your 10th std percentage: ");
        float percentage = float.Parse(Console.ReadLine());

        // Check eligibility criteria
        if (age > 18 && age <= 30 && percentage >= 65)
        {
            Console.WriteLine("You are eligible to apply for the exam.");
        }
        else
        {
            Console.WriteLine("You are not eligible to apply for the exam.");
        }
    }
}
