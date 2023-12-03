using AbstractFactory.Models;

namespace AbstractFactory.Entities.BaseFurniture.Interfaces;

public interface ITable : IFurniture
{
    public string Model { get; set; }
    public string Material { get; set; }
    public ItemAttributes FurnitureAttributes { get; set; }
    public bool IsFoldable { get; set; }
}