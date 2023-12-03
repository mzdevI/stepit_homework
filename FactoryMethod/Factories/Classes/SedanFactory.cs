using FactoryMethod.Factories.Interfaces;
using FactoryMethod.Models;

namespace FactoryMethod.Factories.Classes;

public class SedanFactory : IFactory
{
    public T CreateAutomobile<T>() where T : IAutomobile
    {
        return Activator.CreateInstance<T>();
    }
}