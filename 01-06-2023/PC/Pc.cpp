#include "Pc.h"

Pc::Pc(const GraphicsCard &graphicsCard, const Motherboard &motherBoard, const PowerSupply &powerSupply, const Cooling &cooling)
       : graphicsCard(graphicsCard), motherBoard(motherBoard), powerSupply(powerSupply), cooling(cooling) {}
