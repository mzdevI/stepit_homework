namespace AbstractFactory.Entities;

public interface ICar : IVehicle
{
    public string CarEngine { get; set; }
}
