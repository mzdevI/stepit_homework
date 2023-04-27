#include <iostream>
#include "utils.h"
using namespace std;

int main() {
    int arrSize = 6;
    auto** products = new char*[arrSize] {
            new char[20]{"Jacket"},
            new char[20]{"Hat"},
            new char[20]{"Jeans"},
            new char[20]{"Gloves"},
            new char[20]{"Socks"},
            new char[20]{"T-shirt"}
    };
    // Need to use auto here to reduce wording, but have not learned it yet
    auto* productInventory = new unsigned int[arrSize] {3, 2, 5, 2, 1, 7};
    auto* productPrice = new float[arrSize]     {200, 40, 70, 50, 20, 60};
    auto* discountItems = new float[arrSize]{}; // Here each index on these elements represent the index of the products, and the value of each element represent the discount amount
    auto* discountBundle = new int[arrSize+1]{};  // First element is the discount amount and the next elements are 1 or 0, 1 being is in the bundle and 0 being not in the bundle

    float totalCost{};
    uint16_t choice{};
    unsigned int amount{};
    int discountBundlePurchaseCount{};

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
                system("clear"); // For macOS
                cin.ignore();
                // Manage Products
                cout << "Choose action" << endl
                     << "0 - Go back" << endl
                     << "1 - Check info about all items" << endl
                     << "2 - Add Item" << endl
                     << "3 - Manage Inventory" << endl
                     << "4 - Manage discounts" << endl;
                cin >> choice;
                if (choice == 0) {
                    system("clear");
                    break;
                }
                switch (choice) {
                    case 1:
                        system("clear"); // For macOS
                        // Display info for all the products
                        for (int i = 0; i < arrSize; i++) {
                            cout << "Product: " << '\t' << products[i] << '\t'
                                 << "Inventory: " << '\t' << productInventory[i] << '\t'
                                 << "Price: " << '\t' << productPrice[i] << '\t'
                                 << "Discount: " << '\t' << discountItems[i] << endl;
                        }
                        break;
                    case 2: {
                        system("clear"); // For macOS
                        addItem(products, productInventory, productPrice, discountBundle, discountItems, arrSize);
                        break;
                    }
                    case 3: {
                        system("clear");
                        // Manage Inventory
                        unsigned int amountToAdd{};
                        for (int i = 0; i < arrSize; i++) {
                            cout << i+1 << " - " << products[i] << '\t' << "Amount left: " << productInventory[i] << endl;
                        }
                        cout << "Choose product to manage: ";
                        cin >> choice;
                        if (choice > arrSize || choice < 1) {
                            cout << "ERROR: Enter a valid choice" << endl;
                            break;
                        }
                        cout << "Enter amount to add: ";
                        cin >> amountToAdd;
                        productInventory[choice - 1] += amountToAdd;
                        break;
                    }
                    case 4:
                        system("clear");
                        // Manage discounts
                        cout << "Manage Discounts" << endl
                             << "1 - Manage discount for individual items" << endl
                             << "2 - Manage discount for bundles" << endl;
                        cin >> choice;

                        switch (choice) {
                            case 1:
                                system("clear");
                                // Manage discount for individual items
                                for (int i = 0; i < arrSize; i++) {
                                    cout << i+1 << " - " << products[i] << '\t' << "Discount: " << discountItems[i] << endl;
                                }
                                cout << "Choose product to manage: ";
                                cin >> choice;
                                if (choice > arrSize || choice < 1) {
                                    cout << "ERROR: Enter a valid choice" << endl;
                                }
                                else{
                                    cout << "Enter discount amount: ";
                                    cin >> discountItems[choice - 1];
                                }
                                break;

                            case 2:
                                system("clear");
                                // Manage discount for bundles
                                if (discountBundle[0] == 0) {
                                    cout << "Add bundle" << endl;
                                    cout << "Enter discount percentage for discount bundle (e.g. 10 for 10%): ";
                                    cin >> discountBundle[0];
                                    for (int i = 0; i < arrSize; i++) {
                                        cout << "Do you wish to add " << products[i] << " to the bundle? (0 - no /1 - yes): ";
                                        cin >> choice;
                                        if (choice > 1 || choice < 0) {
                                            cout << "ERROR: Enter a valid choice" << endl;
                                            i--;
                                        }
                                        else {
                                            if (choice == 1) {
                                                discountItems[i] = discountBundle[0];
                                            }
                                        }
                                    }
                                }
                                break;
                            default:
                                cout << "ERROR: Enter a valid choice";
                        }
                        break;
                    default:
                        cout << "ERROR: Enter a valid choice";
                        break;
                }
                break;
            case 2:
                // Enter Products - Basic cashier
                while (true) {
                    for (int i{}; i < arrSize; i++) {
                        cout << i+1 << " - " << products[i] << endl;
                    }
                    cout << "Choice Product to scan or enter 0 if all items have been scanned: " << endl;
                    cin >> choice;

                    if (choice == 0) {
                        // IF the total cost is over 300, they get one item for free
                        if (totalCost > 300) {
                            cout << "You get one item for free" << endl;
                            cout << "Choose item to get for free: ";
                            cin >> choice;
                            if (choice > arrSize || choice < 1) {
                                cout << "ERROR: Enter a valid choice" << endl;
                                break;
                            }
                            else {
                                // check if the item is in stock
                                if (productInventory[choice - 1] == 0) {
                                    cout << "Product is out of stock" << endl;
                                    remove(--choice, arrSize, products, productInventory, productPrice, discountItems, ++discountBundle);
                                    arrSize--;
                                    break;
                                }
                                else {
                                    productInventory[choice - 1]--;
                                    totalCost -= productPrice[choice - 1];
                                }
                            }
                        }

                        cout << "Total cost: " << totalCost << endl;
                        break;
                    }

                    else if (choice > arrSize || choice < 1) {
                        cout << "ERROR: Enter a valid choice" << endl;
                    }
                    else {
                        cout << "Enter amount: ";
                        cin >> amount;
                        if (productInventory[choice-1] < amount || amount < 0) {
                            if (productInventory[choice-1] == 0) {
                                cout << "Product is out of stock" << endl;
                                remove(--choice, arrSize, products, productInventory, productPrice, discountItems, ++discountBundle);
                                arrSize--;
                            }
                            else{
                                cout << "ERROR: Enter a valid inventory amount" << endl;
                            }
                            break;
                        }
                        else {
                            if (discountItems[choice - 1] > 0) {
                                int bundleDiscount = discountBundle[0];
                                int bundleIndex = choice + arrSize;

                                if (discountBundle[bundleIndex] == 1) {
                                    float discountAmount = (productPrice[choice - 1] * (discountItems[choice - 1] + bundleDiscount)) / 100;
                                    totalCost += (productPrice[choice - 1] - discountAmount) * amount;
                                } else {
                                    float discountAmount = productPrice[choice - 1] * discountItems[choice - 1] / 100;
                                    totalCost += (productPrice[choice - 1] - discountAmount) * amount;
                                }
                            } else {
                                totalCost += productPrice[choice - 1] * amount;
                            }
                        }
                    }
                }

            default:
                cout << "ERROR: Please enter a valid choice" << endl;
                break;
        }

    }

    for (int i = 0; i < arrSize; i++) {
        delete[] products[i];
    }
    delete[] products;

    delete[] productInventory;
    delete[] productPrice;
    delete[] discountItems;
    delete[] discountBundle;


    return 0;
}
