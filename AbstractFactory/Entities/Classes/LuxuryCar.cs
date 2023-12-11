namespace AbstractFactory.Entities;

public class LuxuryCar : ICar
{
    public string Model { get; set; }
    public string Mark { get; set; }
    public DateTime Created { get; set; }
    public string CarEngine { get; set; }
}
