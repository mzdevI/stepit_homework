#include "Bus.h"

Bus::Bus(int number, const string &firstName, const string &lastName, int route, int seats) {
    busNumber = number;
    driverFirstName = firstName;
    driverLastName = lastName;
    routeNumber = route;
    numberOfSeats = seats;
}
