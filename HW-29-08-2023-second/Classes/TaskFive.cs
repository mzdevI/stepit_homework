namespace _29_08_2023_second.Classes;

public static class TaskFive 
{
    public static double CalculateExpression(string expression)
    {
        try
        {
            return EvaluateExpression(expression);
        }
        catch (Exception ex)
        {
            Console.WriteLine($"Error: {ex.Message}");
            return double.NaN; // Return NaN for invalid expressions
        }
    }

    public static double EvaluateExpression(string expression)
    {
        char[] operators = { '+', '-' };

        string[] tokens = expression.Split(operators);

        if (tokens.Length != 2)
        {
            throw new InvalidOperationException("Invalid expression. Please enter an expression in the form of 'number operator number'.");
        }

        double operand1 = ParseDouble(tokens[0].Trim());
        double operand2 = ParseDouble(tokens[1].Trim());

        char operation = FindOperator(expression, operators);

        switch (operation)
        {
            case '+':
                return operand1 + operand2;
            case '-':
                return operand1 - operand2;
            default:
                throw new InvalidOperationException("Invalid operator. Supported operators are '+' and '-'.");
        }
    }

    public static double ParseDouble(string str)
    {
        if (!double.TryParse(str, out double result))
        {
            throw new FormatException($"Invalid number format: {str}");
        }
        return result;
    }

    public static char FindOperator(string expression, char[] operators)
    {
        foreach (char op in operators)
        {
            if (expression.Contains(op))
            {
                return op;
            }
        }
        throw new InvalidOperationException("No operator found in the expression.");
    }

    public static void Demo()
    {
        Console.Write("Enter an arithmetic expression (+ or -): ");
        string input = Console.ReadLine();
        
        double result = CalculateExpression(input);

        if (!double.IsNaN(result))
        {
            Console.WriteLine($"Result: {result}");
        }
    }
}
