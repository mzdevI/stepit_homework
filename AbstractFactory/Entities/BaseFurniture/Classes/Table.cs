using AbstractFactory.Entities.BaseFurniture.Interfaces;
using AbstractFactory.Models;

namespace AbstractFactory.Entities.BaseFurniture.Classes;

public class Table : ITable
{
    public string Model { get; set; }
    public string Material { get; set; }
    public ItemAttributes FurnitureAttributes { get; set; }
    public bool IsFoldable { get; set; }
    
    public Table(string model, string material, ItemAttributes furnitureAttributes, bool isFoldable)
    {
        Model = model;
        Material = material;
        FurnitureAttributes = furnitureAttributes;
        IsFoldable = isFoldable;
    }
}