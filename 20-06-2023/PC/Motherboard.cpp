#include "Motherboard.h"


string Motherboard::getSocket() const {
    return socket;
}

int Motherboard::getPciExpressSlots() const {
    return pciExpressSlots;
}

string Motherboard::getFormFactor() const {
    return formFactor;
}

Motherboard::Motherboard(const string &brand, const string &model, Processor *processor, Storage *storage, RAM *ram,
                         const string &socket, int pciExpressSlots, const string &formFactor) : PcComponent(brand, model) {
    this->socket = socket;
    this->pciExpressSlots = pciExpressSlots;
    this->formFactor = formFactor;

    this->processor = processor;
    this->storage = storage;
    this->ram = ram;
}

