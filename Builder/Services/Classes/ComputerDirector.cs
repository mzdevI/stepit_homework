using Builder.Entities;

namespace Builder.Services.Classes;

public class ComputerDirector
{
    public Computer CreateDesignComputer()
    {
        var designComputerBuilder = new DesignComputerBuilder();
        designComputerBuilder.AddCPU();
        designComputerBuilder.AddGPU();
        designComputerBuilder.AddRAM();
        designComputerBuilder.AddStorage();
        designComputerBuilder.AddPCU();
        designComputerBuilder.AddMotherboard();

        return designComputerBuilder.Build();
    }
    
    public Computer CreateOfficeComputer()
    {
        var officeComputerBuilder = new OfficeComputerBuilder();
        officeComputerBuilder.AddCPU();
        officeComputerBuilder.AddGPU();
        officeComputerBuilder.AddRAM();
        officeComputerBuilder.AddStorage();
        officeComputerBuilder.AddPCU();
        officeComputerBuilder.AddMotherboard();

        return officeComputerBuilder.Build();
    }
    public Computer CreateGamingComputer()
    {
        var gamingComputerBuilder = new GamingComputerBuilder();
        gamingComputerBuilder.AddCPU();
        gamingComputerBuilder.AddGPU();
        gamingComputerBuilder.AddRAM();
        gamingComputerBuilder.AddStorage();
        gamingComputerBuilder.AddPCU();
        gamingComputerBuilder.AddMotherboard();

        return gamingComputerBuilder.Build();
    }
 
}
