#ifndef INC_11_07_2023_BUS_H
#define INC_11_07_2023_BUS_H

#include "string"
using namespace std;

class Bus {
public:
    int busNumber;
    string driverFirstName;
    string driverLastName;
    int routeNumber;
    int numberOfSeats;

    Bus(int number, const string& firstName, const string& lastName, int route, int seats);
};

#endif
