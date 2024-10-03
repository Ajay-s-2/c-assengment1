using System;

class Program
{
    static void Main()
    {
        // Prompt user for array dimensions
        Console.Write("Enter the number of rows: ");
        int rows = int.Parse(Console.ReadLine());

        Console.Write("Enter the number of columns: ");
        int columns = int.Parse(Console.ReadLine());

        // Initialize a 2D array with user-defined size
        int[,] array = new int[rows, columns];

        // Get input from the user for each element of the array
        Console.WriteLine("Enter the elements of the array:");

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                Console.Write($"Element [{i}, {j}]: ");
                array[i, j] = int.Parse(Console.ReadLine());
            }
        }

        // Print all elements in a single line, separated by spaces
        Console.WriteLine("Array elements:");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                Console.Write(array[i, j] + " ");
            }
        }

        // To ensure the output ends with a new line
        Console.WriteLine();
    }
}
