using Builder.Entities;
using Builder.Services.Interfaces;

namespace Builder.Services.Classes;

public class GamingComputerBuilder : IComputerBuilder
{
    private readonly Computer _computer = new Computer();

    public IComputerBuilder AddCPU()
    {
        _computer.CPU = "Intel Core I7";
        return this;
    }

    public IComputerBuilder AddGPU()
    {
        _computer.GPU = "NVIDIA GeForce RTX 3080";
        return this;
    }

    public IComputerBuilder AddRAM()
    {
        _computer.RAM = "32GB DDR4";
        return this;
    }

    public IComputerBuilder AddStorage()
    {
        _computer.Storage = "1TB NVMe SSD";
        return this;
    }

    public IComputerBuilder AddPCU()
    {
        _computer.PCU = "850W Gold Certified";
        return this;
    }

    public IComputerBuilder AddMotherboard()
    {
        _computer.Motherboard = "ASUS ROG Strix Z590-E";
        return this;
    }

    public Computer Build()
    {
        return _computer;
    }
}
