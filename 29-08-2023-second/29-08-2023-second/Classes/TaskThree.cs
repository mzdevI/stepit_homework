namespace _29_08_2023_second.Classes;

public class TaskThree
{
    public static string Encrypt(string plainText, int shift)
    {
        char[] result = new char[plainText.Length];

        for (int i = 0; i < plainText.Length; i++)
        {
            char ch = plainText[i];

            if (char.IsLetter(ch))
            {
                char offset = char.IsUpper(ch) ? 'A' : 'a';
                result[i] = (char)((ch + shift - offset) % 26 + offset);
            }
            else
            {
                result[i] = ch;
            }
        }

        return new string(result);
    }

    public static string Decrypt(string encryptedText, int shift)
    {
        return Encrypt(encryptedText, 26 - shift);
    }

    public static void CaesarCipherDemo()
    {
        Console.Write("Enter a string to encrypt: ");
        string input = Console.ReadLine();

        Console.Write("Enter the shift value: ");
        int shift = int.Parse(Console.ReadLine());

        string encryptedText = Encrypt(input, shift);
        string decryptedText = Decrypt(encryptedText, shift);

        Console.WriteLine($"Encrypted Text: {encryptedText}");
        Console.WriteLine($"Decrypted Text: {decryptedText}");
    }
}