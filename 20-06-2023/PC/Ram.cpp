#include "Ram.h"

int RAM::getSpeed() const {
    return speed;
}

int RAM::getModules() const {
    return modules;
}

string RAM::getType() const {
    return type;
}

RAM::RAM(const string &brand, int capacity, int speed, int modules, const string &type) : MemoryComponent(brand, capacity){
    this->speed = speed;
    this->modules = modules;
    this->type = type;
}

