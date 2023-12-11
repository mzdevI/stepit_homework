namespace AbstractFactory.Entities.Classes;

public class BusinessCar : ICar
{
    public string Model { get; set; }
    public string Mark { get; set; }
    public DateTime Created { get; set; }
    public string CarEngine { get; set; }
}
