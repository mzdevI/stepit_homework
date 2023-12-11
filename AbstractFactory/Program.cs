using AbstractFactory.Factories.Classes;
using AbstractFactory.Factories.Interfaces;

Console.Write("");

IVehicleFactory vehicleFactory = new CarFactory();
var car = vehicleFactory.CreateBusiness();

vehicleFactory = new PlaneFactory();
var plane = vehicleFactory.CreateBusiness();
