#ifndef INC_01_06_2023_GRAPHICSCARD_H
#define INC_01_06_2023_GRAPHICSCARD_H

#include <string>
#include "PcComponent.h"
using namespace std;

class GraphicsCard: public PcComponent {
private:
    int memory;
    string memoryType;
    int coreClock;
    int boostClock;
    int powerConsumption;

public:
    GraphicsCard() = default;
    GraphicsCard(const string& brand, const string& model, int memory, const string& memoryType, int coreClock, int boostClock, int powerConsumption);

    int getMemory() const;
    string getMemoryType() const;
    int getCoreClock() const;
    int getBoostClock() const;
    int getPowerConsumption() const;
};


#endif
