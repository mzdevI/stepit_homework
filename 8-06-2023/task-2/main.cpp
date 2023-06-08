#include <iostream>
#include "Airplane.h"
using namespace std;

int main() {
    Airplane airplane1("Boeing 747", 300);
    Airplane airplane2("Airbus A380", 400);

    if (airplane1 == airplane2) {
        cout << "The airplane types are equal." << endl;
    } else {
        cout << "The airplane types are not equal." << endl;
    }

    ++airplane1;
    cout << "New number of passengers on airplane1 after prefix increment: " << airplane1.getPassengers() << endl;

    --airplane2;
    cout << "New number of passengers on airplane2 after prefix decrement: " << airplane2.getPassengers() << endl;

    if (airplane1 > airplane2) {
        cout << "Airplane1 has a higher maximum passenger capacity." << endl;
    } else {
        cout << "Airplane2 has a higher maximum passenger capacity." << endl;
    }
    return 0;
}
