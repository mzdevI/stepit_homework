namespace _29_08_2023_second.Classes;

public static class TaskTwo
{
    public static void CalculateSumBetweenMinMax()
    {
        var array = new int[5, 5];
        var random = new Random();
        
        var min = array[0, 0];
        var max = array[0, 0];
        int minRow = 0, minCol = 0, maxRow = 0, maxCol = 0;
        
        int sum = 0;

        // Fill the array with random numbers in the range [-100, 100]
        for (int row = 0; row < 5; row++)
        {
            for (int col = 0; col < 5; col++)
            {
                array[row, col] = random.Next(-100, 101);
            }
        }

        // Find the minimum and maximum elements and their positions
        for (int row = 0; row < 5; row++)
        {
            for (int col = 0; col < 5; col++)
            {
                if (array[row, col] < min)
                {
                    min = array[row, col];
                    minRow = row;
                    minCol = col;
                }

                if (array[row, col] > max)
                {
                    max = array[row, col];
                    maxRow = row;
                    maxCol = col;
                }
            }
        }

        for (int row = Math.Min(minRow, maxRow) + 1; row < Math.Max(minRow, maxRow); row++)
        {
            for (int col = Math.Min(minCol, maxCol) + 1; col < Math.Max(minCol, maxCol); col++)
            {
                Console.WriteLine();
                sum += array[row, col];
                Console.WriteLine(sum);
            }
        }

        // Display the array and the sum
        Console.WriteLine("Random 5x5 Array:");
        for (int row = 0; row < 5; row++)
        {
            for (int col = 0; col < 5; col++)
            {
                Console.Write(array[row, col] + "\t");
            }
            Console.WriteLine();
        }

        Console.WriteLine($"Sum of elements between min and max: {sum}");
    }
}