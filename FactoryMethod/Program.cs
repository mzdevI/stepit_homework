using FactoryMethod.Factories.Classes;
using FactoryMethod.Factories.Interfaces;
using FactoryMethod.Models;
using Microsoft.VisualBasic;

IFactory factory = new SuvFactory();
var suv = factory.CreateAutomobile<Suv>();