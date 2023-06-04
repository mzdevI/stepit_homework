#include "Ram.h"

RAM::RAM(const string& brand, int capacity, int speed, int modules, const string &type) {
    this->brand = brand;
    this->capacity = capacity;
    this->speed = speed;
    this->modules = modules;
    this->type = type;
}

string RAM::getBrand() const {
    return brand;
}

int RAM::getCapacity() const {
    return capacity;
}

int RAM::getSpeed() const {
    return speed;
}

int RAM::getModules() const {
    return modules;
}

string RAM::getType() const {
    return type;
}
