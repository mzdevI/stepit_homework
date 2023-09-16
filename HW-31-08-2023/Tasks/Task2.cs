namespace HW_31_08_2023.Tasks;

public class Task2
{
    public static bool IsPalindrome(int number)
    {
        string numberStr = number.ToString();

        string reverseStr = new string(numberStr.Reverse().ToArray());

        return numberStr == reverseStr;
    } 
}