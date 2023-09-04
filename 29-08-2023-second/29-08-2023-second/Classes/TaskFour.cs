namespace _29_08_2023_second.Classes;

public static class TaskFour
{
    public static void MultiplyByScalar(int[,] matrix, int scalar)
    {
        int rows = matrix.GetLength(0);
        int columns = matrix.GetLength(1);

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                matrix[i, j] *= scalar;
            }
        }
    }

    public static int[,] AddMatrices(int[,] matrixA, int[,] matrixB)
    {
        int rows = matrixA.GetLength(0);
        int columns = matrixA.GetLength(1);

        int[,] result = new int[rows, columns];

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                result[i, j] = matrixA[i, j] + matrixB[i, j];
            }
        }

        return result;
    }

    public static int[,] MultiplyMatrices(int[,] matrixA, int[,] matrixB)
    {
        int rowsA = matrixA.GetLength(0);
        int columnsA = matrixA.GetLength(1);
        int columnsB = matrixB.GetLength(1);

        int[,] result = new int[rowsA, columnsB];

        for (int i = 0; i < rowsA; i++)
        {
            for (int j = 0; j < columnsB; j++)
            {
                int sum = 0;

                for (int k = 0; k < columnsA; k++)
                {
                    sum += matrixA[i, k] * matrixB[k, j];
                }

                result[i, j] = sum;
            }
        }

        return result;
    }

    public static void PrintMatrix(int[,] matrix)
    {
        int rows = matrix.GetLength(0);
        int columns = matrix.GetLength(1);

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                Console.Write($"{matrix[i, j]}\t");
            }
            Console.WriteLine();
        }
    }

    public static void MatrixOperationsDemo()
    {
        int[,] matrixA = { { 1, 2 }, { 4, 5 } };
        int[,] matrixB = { { 4, 5 }, { 1, 2 }, { 3, 6 } };
        
        Console.WriteLine("Matrix A:");
        PrintMatrix(matrixA);

        Console.WriteLine("\nMatrix B:");
        PrintMatrix(matrixB);

        Console.WriteLine("\nMatrix A multiplied by 2:");
        MultiplyByScalar(matrixA, 2);
        PrintMatrix(matrixA);

        Console.WriteLine("\nMatrix A + Matrix B:");
        int[,] sumResult = AddMatrices(matrixA, matrixB);
        PrintMatrix(sumResult);

        Console.WriteLine("\nMatrix A * Matrix B:");
        int[,] multiplyResult = MultiplyMatrices(matrixA, matrixB);
        PrintMatrix(multiplyResult);
    }
}