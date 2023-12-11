namespace AbstractFactory.Entities;

public interface IPlane : IVehicle
{
    public string PlaneEngine { get; set; }
}
