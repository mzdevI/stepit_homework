namespace _29_08_2023.Classes.Tasks;

public static class TaskTwo
{
    public static void CalcPercentage()
    {
        Console.Write("Enter a value: ");
        double value = Convert.ToDouble(Console.ReadLine());

        Console.Write("Enter a percentage: ");
        double percentage = Convert.ToDouble(Console.ReadLine());

        double result = (percentage / 100) * value;
        Console.WriteLine($"Result: {result}");
    }
}