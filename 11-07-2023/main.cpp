#include <iostream>
#include "BinaryTree.h"

using namespace std;


void displayMenu() {
    cout << "Bus Fleet Management System" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Add a new bus" << endl;
    cout << "2. Search for a bus by bus number" << endl;
    cout << "3. Write bus information to a file" << endl;
    cout << "4. Exit" << endl;
    cout << endl;
}

int main() {
    BinaryTree fleet;
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int busNumber, routeNumber, numberOfSeats;
                string driverFirstName, driverLastName;

                cout << "Enter bus number: ";
                cin >> busNumber;

                cout << "Enter driver's first name: ";
                cin >> driverFirstName;

                cout << "Enter driver's last name: ";
                cin >> driverLastName;

                cout << "Enter route number: ";
                cin >> routeNumber;

                cout << "Enter number of seats: ";
                cin >> numberOfSeats;

                Bus* newBus = new Bus(busNumber, driverFirstName, driverLastName, routeNumber, numberOfSeats);
                fleet.insert(newBus);

                cout << "Bus added successfully!" << endl;
                cout << endl;
                break;
            }
            case 2: {
                int busNumber;
                cout << "Enter bus number to search: ";
                cin >> busNumber;

                Bus* foundBus = fleet.search(busNumber);
                fleet.display(foundBus);

                cout << endl;
                break;
            }
            case 3: {
                string filename;
                cout << "Enter the filename to write bus information: ";
                cin >> filename;

                fleet.writeToFile(filename);

                cout << endl;
                break;
            }
            case 4:
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                cout << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
