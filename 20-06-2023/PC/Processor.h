#ifndef INC_01_06_2023_PROCESSOR_H
#define INC_01_06_2023_PROCESSOR_H

#include <string>
#include "PcComponent.h"
using namespace std;

struct Processor: public PcComponent {
private:
    int cores;
    float clockSpeed;

public:
    Processor() = default;
    Processor(const string& brand, const string& model, int cores, float clockSpeed);

    int getCores() const;
    float getClockSpeed() const;
};



#endif
