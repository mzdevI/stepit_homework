#include "PowerSupply.h"


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

PowerSupply::PowerSupply(const string &brand, const string &model, int wattage, const string &efficiency,
                         const string &formFactor, bool modular) : PcComponent(brand, model){
    this->wattage = wattage;
    this->efficiency =efficiency;
    this->formFactor = formFactor;
    this->modular = modular;
}



