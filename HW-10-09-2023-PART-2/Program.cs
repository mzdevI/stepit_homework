using HW_10_09_2023_PART_2.Task1;
using HW_10_09_2023_PART_2.Task2;
using HW_10_09_2023_PART_2.Task3;
using HW_10_09_2023_PART_2.Task4;

// Task 1
var initialMoney = new Money(50, 75);
var product1 = new Product("Product 1", initialMoney);

Console.WriteLine("Initial Product Info:");
product1.DisplayProductInfo();

product1.ReducePrice(10, 50);

Console.WriteLine("\nProduct Info After Reduction:");
product1.DisplayProductInfo();


// Task 2
IDeviceable kettle = new Kettle("Electric Kettle");
IDeviceable microwave = new Microwave("Microwave Oven");
IDeviceable car = new Car("SUV");
IDeviceable ship = new Ship("Cargo Ship");


// Task 3
IMusicalInstrumentable violin = new Violin("Violin");
IMusicalInstrumentable trombone = new Trombone("Trombone");
IMusicalInstrumentable ukulele = new Ukulele("Ukulele");
IMusicalInstrumentable cello = new Cello("Cello");

// Task 4
var president = new President("John");
var security = new Security("Alice");
var manager = new Manager("Bob");
var engineer = new Engineer("Eve");