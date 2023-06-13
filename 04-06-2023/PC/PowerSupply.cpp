#include "PowerSupply.h"

PowerSupply::PowerSupply(const string& brand, int wattage, const string &efficiency, const string &formFactor, bool modular) {
    this->brand = brand;
    this->wattage = wattage;
    this->efficiency =efficiency;
    this->formFactor = formFactor;
    this->modular = modular;
}

string PowerSupply::getBrand() const {
    return brand;
}

int PowerSupply::getWattage() const {
    return wattage;
}

string PowerSupply::getEfficiency() const {
    return efficiency;
}

string PowerSupply::getFormFactor() const {
    return formFactor;
}

bool PowerSupply::getModular() const {
    return modular;
}


