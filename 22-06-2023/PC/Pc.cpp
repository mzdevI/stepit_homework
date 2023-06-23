#include "Pc.h"


Pc::Pc(GraphicsCard *graphicsCard, Motherboard *motherBoard, PowerSupply *powerSupply, Cooling *cooling) {
    this->graphicsCard = graphicsCard;
    this->motherBoard = motherBoard;
    this->powerSupply = powerSupply;
    this->cooling = cooling;
}

Pc::Pc(const Pc &source) {
    this->graphicsCard = source.graphicsCard;
    this->motherBoard = source.motherBoard;
    this->powerSupply = source.powerSupply;
    this->cooling = source.cooling;
}
