namespace HW_21_09_2023_PART_2;

public class Calculator
{
   public delegate double MathOperation(double a, double b);

   public static double Add(double a, double b) => a + b;
   public static double Subtract(double a, double b) => a - b;
   public static double Multiply(double a, double b) => a * b;
   public static double Divide(double a, double b) => b == 0 ? throw new DivideByZeroException("Division by zero is not allowed.") : a / b;

   public double Calculate(MathOperation mathOperation, double a, double b)
   {
      return mathOperation.Invoke(a, b);
   }
}