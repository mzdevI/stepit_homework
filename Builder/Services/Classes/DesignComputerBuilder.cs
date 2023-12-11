using Builder.Entities;
using Builder.Services.Interfaces;

namespace Builder.Services.Classes;

public class DesignComputerBuilder : IComputerBuilder
{
    private readonly Computer _computer = new Computer();
    
    public IComputerBuilder AddCPU()
    {
        _computer.CPU = "AMD Ryzen 9 5900X";
        return this;
    }

    public IComputerBuilder AddGPU()
    {
        _computer.GPU = "NVIDIA Quadro RTX 5000";
        return this;
    }

    public IComputerBuilder AddRAM()
    {
        _computer.RAM = "64GB DDR4";
        return this;
    }

    public IComputerBuilder AddStorage()
    {
        _computer.Storage = "1TB NVMe SSD";
        return this;
    }

    public IComputerBuilder AddPCU()
    {
        _computer.PCU = "750W Platinum Certified";
        return this;
    }

    public IComputerBuilder AddMotherboard()
    {
        _computer.Motherboard = "MSI MAG B550 TOMAHAWK";
        return this;
    }

    public Computer Build()
    {
        return _computer;
    }
}
