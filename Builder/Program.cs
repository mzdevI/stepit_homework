
using Builder.Services.Classes;

var computerDirector = new ComputerDirector();

var gamingComputer = computerDirector.CreateGamingComputer();
var officeComputer = computerDirector.CreateOfficeComputer();
var designComputer = computerDirector.CreateDesignComputer();
