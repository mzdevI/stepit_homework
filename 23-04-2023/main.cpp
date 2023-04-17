#include <iostream>
using namespace std;




int main() {

    string products[] {"Jacket", "Hat", "Jeans", "gloves", "Socks", "T-shirt" };
    int* productInventory = new int(size(products)); //    int productInventory[] {3, 2, 5, 2, 1, 7 };
    int productPrice[] {200, 40, 70, 50, 20, 60};
    float discountendItems[] {};
    auto* discountBundle = new float(size(products));
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

                switch (choice) {
                    case 0:
                        break;
                    case 1:
                        // Display info for all the products
                        break;
                    case 2:
                        // Add an item
                        break;
                    case 3:
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

    delete discountBundle;
    return 0;
}
