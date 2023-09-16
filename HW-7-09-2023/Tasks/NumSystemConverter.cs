namespace HW_7_09_2023.Tasks;

public static class NumSystemConverter
{
   public static void Converter()
   {
      Console.WriteLine("Number System Converter Menu:");
      Console.WriteLine("1. Decimal to Binary");
      Console.WriteLine("2. Binary to Decimal");
      Console.Write("Enter your choice (1/2): ");

      try
      {
         var choice = int.Parse(Console.ReadLine());

         switch (choice)
         {
            case 1:
               Console.Write("Enter the Decimal Number: ");
               var decimalNumber = int.Parse(Console.ReadLine());
               Console.Write($"Binary Value: {ConvertDecimalToBinary(decimalNumber)}");
               break;

            case 2:
               Console.Write("Enter the Binary Number: ");
               var binaryNumber = Console.ReadLine();
               Console.Write($"Decimal Value: {ConvertBinaryToDecimal(binaryNumber)}");
               break;

            default:
               Console.WriteLine("Invalid choice.");
               break;
         }
      }
      catch (FormatException e)
      {
         Console.WriteLine("ERROR: Enter a valid value");
      }
      
      catch (Exception e)
      {
         Console.WriteLine(e.Message);
      }
   }
   
   private static int ConvertBinaryToDecimal(string binaryNumber)
   {
      return Convert.ToInt32(binaryNumber, 2);
   }

   private static string ConvertDecimalToBinary(int decimalNumber)
   {
      return Convert.ToString(decimalNumber, 2);
   }
}