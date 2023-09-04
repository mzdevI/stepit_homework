namespace _29_08_2023.Classes.Tasks;

public static class TaskThree
{
    public static void FormNumFromDigits()
    {
        Console.WriteLine("Enter four digits:");
        int digitOne = Convert.ToInt32(Console.ReadLine());
        int digitTwo = Convert.ToInt32(Console.ReadLine());
        int digitThree = Convert.ToInt32(Console.ReadLine());
        int digitFour = Convert.ToInt32(Console.ReadLine());

        int number = digitOne * 1000 + digitTwo * 100 + digitThree * 10 + digitFour;
        Console.WriteLine($"Number: {number}");
    }
}