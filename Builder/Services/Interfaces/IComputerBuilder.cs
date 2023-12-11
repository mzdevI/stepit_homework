namespace Builder.Services.Interfaces;

public interface IComputerBuilder
{
    public IComputerBuilder AddCPU();
    public IComputerBuilder AddGPU();
    public IComputerBuilder AddRAM();
    public IComputerBuilder AddStorage();
    public IComputerBuilder AddPCU();
    public IComputerBuilder AddMotherboard();
}
