namespace AbstractFactory.Entities;

public class LuxuryPLane : IPlane
{
    public string Model { get; set; }
    public string Mark { get; set; }
    public DateTime Created { get; set; }
    public string PlaneEngine { get; set; }
}
