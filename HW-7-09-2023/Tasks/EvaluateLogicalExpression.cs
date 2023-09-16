namespace HW_7_09_2023.Tasks;

public static class EvaluateLogicalExpression
{
    public static void Demo()
    {
        Console.Write("Enter a logical expression (Separate values with a space): ");
        var userInput = Console.ReadLine();

        try
        {
            var result = EvaluateExpression(userInput);
            Console.WriteLine($"Result: {result}");
        }
        catch (Exception e)
        {
            Console.WriteLine($"Error: {e.Message}");
        }
    }

    private static bool EvaluateExpression(string expression)
    {
        try
        {
            var parts = expression.Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries); // Splits into array by spaces and removes spaces

            if (parts.Length != 3)
            {
                throw new ArgumentException("Invalid expression format.");
            }

            var leftOperand = int.Parse(parts[0]);
            var op = parts[1];
            var rightOperand = int.Parse(parts[2]);

            switch (op)
            {
                case ">":
                    return leftOperand > rightOperand;
                case "<":
                    return leftOperand < rightOperand;
                case ">=":
                    return leftOperand >= rightOperand;
                case "<=":
                    return leftOperand <= rightOperand;
                case "==":
                    return leftOperand == rightOperand;
                case "!=":
                    return leftOperand != rightOperand;
                default:
                    throw new ArgumentException("Invalid operator.");
            }
        }
        catch (Exception e)
        {
            throw new ArgumentException("Error evaluating the expression.", e);
        }
    } 
}