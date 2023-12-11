namespace AbstractFactory.Entities;

public interface IVehicle
{
    public string Model { get; set; }
    public string Mark { get; set; }
    public DateTime Created { get; set; }
}
