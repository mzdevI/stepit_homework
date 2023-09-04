namespace _29_08_2023.Classes.Tasks;

public static class TaskOne
{
    public static void FizzBuzz(int num)
    {
        if (num is > 1 and < 100) // merged  statement
        {
            if (num % 3 == 0 && num % 5 == 0)
                Console.WriteLine("FizzBuzz");
            
            else if (num % 3 == 0)
                Console.WriteLine("Fizz");
            
            else if (num % 5 == 0)
                Console.WriteLine("Buzz");
            
            else
                Console.WriteLine(num);
        }
        
        else
        {
            throw new ArgumentOutOfRangeException("num", "Value must be between 1 and 100."); 
        }
    }
}