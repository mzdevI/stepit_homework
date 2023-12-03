using AbstractFactory.Entities.BaseFurniture.Interfaces;
using AbstractFactory.Models;

namespace AbstractFactory.Entities.BaseFurniture.Classes;

public class Chair : IChair
{
    public string Model { get; set; }
    public string Material { get; set; }
    public ItemAttributes FurnitureAttributes { get; set; }
    public bool HasBackrest { get; set; }

    public Chair(bool hasBackrest, ItemAttributes furnitureAttributes, string material, string model)
    {
        HasBackrest = hasBackrest;
        FurnitureAttributes = furnitureAttributes;
        Material = material;
        Model = model;
    }
}