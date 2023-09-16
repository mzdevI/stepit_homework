namespace _29_08_2023.Classes.Tasks;

public static class TaskSeven
{
    public static void FindEvenNumInArray()
    {
        Console.Write("Enter first num: ");
        int numOne = Int32.Parse(Console.ReadLine());
        
        Console.Write("Enter second num: ");
        int numTwo = Int32.Parse(Console.ReadLine());

        if (numOne > numTwo)
        {
            (numOne, numTwo) = (numTwo, numOne);
        }
        
        for (int i = numOne; i <= numTwo; i++)
        {
            Console.WriteLine(i);
        }
    }
}