
#include "PcComponent.h"

PcComponent::PcComponent(const string &brand, const string &model) {
    this->brand = brand;
    this->model = model;
}

string PcComponent::getBrand() {
    return brand;
}

string PcComponent::getModel() {
    return model;
}
