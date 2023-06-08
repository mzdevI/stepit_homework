#include "Airplane.h"


Airplane::Airplane(const string& type, int passengers) : type(type), passengers(passengers) {}

bool Airplane::operator==(const Airplane& other) {
    return type == other.type;
}

bool Airplane::operator>(const Airplane& other) const {
    return passengers > other.passengers;
}

Airplane &Airplane::operator++() {
    ++passengers;
    return *this;
}

Airplane &Airplane::operator--() {
    if (passengers > 0) {
        --passengers;
    }
    return *this;

}

int Airplane::getMaxPassengers() const {
    if (type == "Boeing 747") {
        return 400;
    } else if (type == "Airbus A380") {
        return 550;
    } else if (type == "Cessna 172") {
        return 4;
    } else {
        return 0;
    }
}

int Airplane::getPassengers() const {
    return passengers;
}