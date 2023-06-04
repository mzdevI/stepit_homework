#include "Motherboard.h"

Motherboard::Motherboard(const string &brand, const string &model, const Processor &processor, const Storage& storage, const RAM &ram,
                         const string &socket, int pciExpressSlots, const string &formFactor)
                         : processor(processor), storage(storage), ram(ram) {

    this->brand = brand;
    this->model = model;
    this->socket = socket;
    this->pciExpressSlots = pciExpressSlots;
    this->formFactor = formFactor;
}

string Motherboard::getBrand() const {
    return brand;
}

string Motherboard::getModel() const {
    return model;
}

string Motherboard::getSocket() const {
    return socket;
}

int Motherboard::getPciExpressSlots() const {
    return pciExpressSlots;
}

string Motherboard::getFormFactor() const {
    return formFactor;
}