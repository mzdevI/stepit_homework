using FactoryMethod.Models;

namespace FactoryMethod.Factories.Interfaces;

public interface IFactory
{
    public T CreateAutomobile<T>() where T : IAutomobile;
}