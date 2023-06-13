#ifndef INC_01_06_2023_PC_H
#define INC_01_06_2023_PC_H

#include "GraphicsCard.h"
#include "Motherboard.h"
#include "PowerSupply.h"
#include "Cooling.h"

class Pc {
public:
    GraphicsCard graphicsCard;
    Motherboard motherBoard;
    PowerSupply powerSupply;
    Cooling cooling;

    Pc(const GraphicsCard& graphicsCard, const Motherboard& motherBoard, const PowerSupply& powerSupply, const Cooling& cooling);
};

#endif