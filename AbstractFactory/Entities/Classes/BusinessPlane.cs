namespace AbstractFactory.Entities;

public class BusinessPlane : IPlane
{
    public string Model { get; set; }
    public string Mark { get; set; }
    public DateTime Created { get; set; }
    public string PlaneEngine { get; set; }
}
