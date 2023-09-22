using HW_21_09_2023_PART_2;

var calculator = new Calculator();
Calculator.MathOperation addition = Calculator.Add;
Calculator.MathOperation subtraction = Calculator.Subtract;
Calculator.MathOperation multiplication = Calculator.Multiply;
Calculator.MathOperation division = Calculator.Divide;

Console.WriteLine($"Addition: {calculator.Calculate(addition, 10, 5)}");
Console.WriteLine($"Subtraction: {calculator.Calculate(subtraction, 10, 5)}");
Console.WriteLine($"Multiplication: {calculator.Calculate(multiplication, 10, 5)}");
Console.WriteLine($"Division: {calculator.Calculate(division, 10, 5)}");