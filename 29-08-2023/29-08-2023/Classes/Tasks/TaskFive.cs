namespace _29_08_2023.Classes.Tasks;

public static class TaskFive
{
    public static void DisplaySeasonAndWeekDay()
    {
        Console.Write("Enter a date (dd.mm.yyyy): ");
        DateTime date = DateTime.ParseExact(Console.ReadLine(), "dd.MM.yyyy", null);

        string season = "";

        if ((date.Month >= 3 && date.Month <= 5) || (date.Month == 12 && date.Day >= 21))
            season = "Spring";
        else if (date.Month >= 6 && date.Month <= 8)
            season = "Summer";
        else if (date.Month >= 9 && date.Month <= 11)
            season = "Autumn/Fall";
        else
            season = "Winter";

        string dayOfWeek = date.DayOfWeek.ToString();
        Console.WriteLine($"{season} {dayOfWeek}");
    }
}