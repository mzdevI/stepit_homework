using HW_13_02_2024.Repository;

var connectionString = "Data Source=.;Initial Catalog=Shop;Integrated Security=True";

var productRepository = new ProductRepository(connectionString);
var products = productRepository.GetAllProducts();

foreach (var product in products)
{
    Console.WriteLine($"Id: {product.Id}, Name: {product.Name}");
}
