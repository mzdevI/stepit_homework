#include "Pc.h"


Pc::Pc(GraphicsCard *graphicsCard, Motherboard *motherBoard, PowerSupply *powerSupply, Cooling *cooling) {
    this->graphicsCard = graphicsCard;
    this->motherBoard = motherBoard;
    this->powerSupply = powerSupply;
    this->cooling = cooling;
}
