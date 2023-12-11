using AbstractFactory.Entities;
using AbstractFactory.Factories.Interfaces;

namespace AbstractFactory.Factories.Classes;

public class PlaneFactory : IVehicleFactory
{
    public IVehicle CreateLuxury()
    {
        IPlane plane = new LuxuryPLane();
        return plane;
    }

    public IVehicle CreateBusiness()
    {
        IPlane plane = new BusinessPlane();
        return plane;
    }

}
