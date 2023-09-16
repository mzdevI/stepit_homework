namespace _29_08_2023.Classes.Tasks;

public static class TaskFour
{
    public static void SwapDigits()
    {
        Console.Write("Enter a six-digit number: ");
        int number = Convert.ToInt32(Console.ReadLine());

        if (number >= 100000 && number <= 999999)
        {
            Console.Write("Enter positions to swap (example: 1,6): ");
            string[] positions = Console.ReadLine().Split(',');
            int positionOne = Convert.ToInt32(positions[0]);
            int positionTwo = Convert.ToInt32(positions[1]);

            int[] digits = number.ToString().Select(c => int.Parse(c.ToString())).ToArray();
            (digits[positionOne - 1], digits[positionTwo - 1]) = (digits[positionTwo - 1], digits[positionOne - 1]);
            

            int swappedNumber = int.Parse(string.Join("", digits));
            Console.WriteLine($"Swapped Number: {swappedNumber}");
        }
        else
        {
            Console.WriteLine("Invalid input. Please enter a six-digit number.");
        }
 
    }
}