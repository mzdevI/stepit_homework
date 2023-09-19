namespace HW_10_09_2023_PART_2.Task1;

public class Money
{
    public int dollars
    {
        get => dollars;
        set => dollars = value;
        
    }

    public int cents
    {
        get => cents;
        set
        {
            if (value >= 0 && value <= 99)
                cents = value;
            else
                throw new ArgumentException("Cents must be between 0 and 99.");
        }
    }

    public Money(int dollars, int cents)
    {
        this.dollars = dollars;
        this.cents = cents;
    }

    public void DisplayAmount()
    {
        Console.WriteLine($"Total Amount: ${dollars}.{cents:D2}");
    }

    public void SubtractMoney(int subtractDollars, int subtractCents)
    {
        dollars -= subtractDollars;
        cents -= subtractCents;

        if (cents < 0)
        {
            dollars--;
            cents += 100;
        }
    }
}