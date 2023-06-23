#ifndef INC_01_06_2023_RAM_H
#define INC_01_06_2023_RAM_H

#include <string>
#include "MemoryComponent.h"
using namespace std;

struct RAM: public MemoryComponent {
private:
    int speed{};
    int modules{};
    string type;

public:
    RAM(const string& brand, int capacity, int speed, int modules, const string& type);

    int getSpeed() const;
    int getModules() const;
    string getType() const;

};

#endif
