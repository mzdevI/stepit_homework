using AbstractFactory.Entities;
using AbstractFactory.Entities.Classes;
using AbstractFactory.Factories.Interfaces;

namespace AbstractFactory.Factories.Classes;

public class CarFactory : IVehicleFactory
{
    public IVehicle CreateLuxury()
    {
        ICar car = new LuxuryCar();
        return car;
    }

    public IVehicle CreateBusiness()
    {
        ICar car = new BusinessCar();
        return car;
    }
}
