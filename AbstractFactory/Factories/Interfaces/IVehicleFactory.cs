using AbstractFactory.Entities;

namespace AbstractFactory.Factories.Interfaces;

public interface IVehicleFactory
{
    public IVehicle CreateLuxury();
    public IVehicle CreateBusiness();
}
