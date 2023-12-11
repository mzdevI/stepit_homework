using Builder.Entities;
using Builder.Services.Interfaces;

namespace Builder.Services.Classes;

public class OfficeComputerBuilder : IComputerBuilder
{
    private readonly Computer _computer = new Computer();

    public IComputerBuilder AddCPU()
    {
        _computer.CPU = "Intel Core i5";
        return this;
    }

    public IComputerBuilder AddGPU()
    {
        _computer.GPU = "Integrated Graphics";
        return this;
    }

    public IComputerBuilder AddRAM()
    {
        _computer.RAM = "8GB DDR4";
        return this;
    }

    public IComputerBuilder AddStorage()
    {
        _computer.Storage = "256GB SSD";
        return this;
    }

    public IComputerBuilder AddPCU()
    {
        _computer.PCU = "400W Bronze Certified";
        return this;
    }

    public IComputerBuilder AddMotherboard()
    {
        _computer.Motherboard = "ASUS Prime H410M-A";
        return this;
    }

    public Computer Build()
    {
        return _computer;
    }
}
