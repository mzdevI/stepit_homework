#include <iostream>
using namespace std;

int main() {
    // Need to work on the code bellow
    int arrSize = 6;
    char** products = new char*[arrSize] {
            new char[20]{"Jacket"},
            new char[20]{"Hat"},
            new char[20]{"Jeans"},
            new char[20]{"Gloves"},
            new char[20]{"Socks"},
            new char[20]{"T-shirt"}
    };

    int* productInventory = new int[arrSize]   {3, 2, 5, 2, 1, 7};
    int* productPrice = new int[arrSize]       {200, 40, 70, 50, 20, 60};
    float* discountItems = new float[arrSize]  {0, 0, 0, 0, 0, 0}; // Here each index on these elements represent the index of the products, and the value of each element represent the discount amount
    int* discountBundle = new int[arrSize]{};  // First element is the discount amount and the next elements are indexes of the products that are discounted
    float totalCost{};
    int choice{};

    while (true) {
        cout << "Choose Mode: " << endl
             << "1 - Manage Products" << endl
             << "2 - Enter Products" << endl
             << "3 - quit" << endl;
        cin >> choice;
        if (choice == 3)
            break;

        switch (choice) {
            case 1:
                // Manage Products
                cout << "Choose action" << endl
                     << "0 - Go back" << endl
                     << "1 - Check info about all items" << endl
                     << "2 - Add Item" << endl
                     << "3 - Manage Inventory" << endl
                     << "4 - Manage discounts" << endl;
                cin >> choice;
                if (choice == 0)
                    break;

                switch (choice) {
                    case 1:
                        // Display info for all the products
                        for (int i = 0; i < arrSize; i++) {
                            cout << "Product: " << products[i] << endl
                                 << "Inventory: " << productInventory[i] << endl
                                 << "Price: " << productPrice[i] << endl
                                 << "Discount: " << discountItems[i] << endl;
                        }
                        break;
                    case 2:
                        // Add Item
                        arrSize++;
                        char **tempProducts = new char *[arrSize];
                        int *tempProductInventory = new int[arrSize];
                        int *tempProductPrice = new int[arrSize];
                        float *tempDiscountItems = new float[arrSize];
                        int *tempDiscountBundle = new int[arrSize];

                        for (int i = 0; i < arrSize - 1; i++) {
                            tempProducts[i] = new char[strlen(products[i]) + 1];
                            strcpy(tempProducts[i], products[i]);
                            tempProductInventory[i] = productInventory[i];
                            tempProductPrice[i] = productPrice[i];
                            tempDiscountItems[i] = discountItems[i];
                            tempDiscountBundle[i] = discountBundle[i];
                        }

                        cout << "Enter product name: ";
                        tempProducts[arrSize -
                                     1] = new char[100]; // Assuming max length of product name is 99 characters
                        cin.ignore(); // Ignore any previous newline character in input buffer
                        cin.getline(tempProducts[arrSize - 1], 100);

                        cout << "Enter product inventory: ";
                        cin >> tempProductInventory[arrSize - 1];
                        cout << "Enter product price: ";
                        cin >> tempProductPrice[arrSize - 1];
                        cout << "Enter product discount: ";
                        cin >> tempDiscountItems[arrSize - 1];

                        for (int i = 0; i < arrSize - 1; i++) {
                            delete[] products[i];
                        }
                        delete[] products;
                        delete[] productInventory;
                        delete[] productPrice;
                        delete[] discountItems;
                        delete[] discountBundle;

                        products = tempProducts;
                        productInventory = tempProductInventory;
                        productPrice = tempProductPrice;
                        discountItems = tempDiscountItems;
                        discountBundle = tempDiscountBundle;

                        break;
                    case 3:
                        cout << "" << endl;
                        // Manage Inventory
                        break;
                    case 4:
                        // Manage discounts
                        break;
                    default:
                        cout << "ERROR: Enter a valid choice";
                        break;

                }

                break;
            case 2:
                // Enter Products - Basic casheer
                cout << "Enter Products" << endl;
                break;
            default:
                cout << "ERROR: Please enter a valid choice" << endl;
                break;
        }

    }
    delete[] products;
    delete[] productInventory;
    delete[] productPrice;
    delete[] discountBundle;

    return 0;
}
