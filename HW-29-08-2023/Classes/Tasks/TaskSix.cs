namespace _29_08_2023.Classes.Tasks;

public static class TaskSix
{
    public static void DisplaySeasonAndWeekDay()
    {
        Console.Write("Enter temperature value: ");
        double value = Convert.ToDouble(Console.ReadLine());

        Console.Write("Enter 'C' for Celsius to Fahrenheit, or 'F' for Fahrenheit to Celsius: ");
        char unit = Console.ReadKey().KeyChar;
        Console.WriteLine();

        double result = 0;

        if (unit == 'C' || unit == 'c')
        {
            result = (value * 9 / 5) + 32;
            Console.WriteLine($"Converted temperature: {result}°F");
        }
        else if (unit == 'F' || unit == 'f')
        {
            result = (value - 32) * 5 / 9;
            Console.WriteLine($"Converted temperature: {result}°C");
        }
        else
        {
            Console.WriteLine("Invalid input.");
        }
    }
}