using System;

class Person
{
    // Declare member variables for name, age, and weight
    public string name;
    public int age;
    public float weight;

    // Method to print person's details
    public void PrintPerson()
    {
        // Print name, age, and weight of the person
        Console.WriteLine($"Name: {name}");
        Console.WriteLine($"Age: {age}");
        Console.WriteLine($"Weight: {weight}");
    }
}

class PersonData
{
    static void Main(string[] args)
    {
        // Create a new person object
        Person person = new Person();

        // Assign values to the object
        person.name = "Kannan";
        person.age = 19;
        person.weight = 58;

        // Call the PrintPerson() function to display details
        person.PrintPerson();
    }
}
