#include <iostream>
#include <string>
#include "PC/Pc.h"
#include "PC/Motherboard.h"
#include "PC/Cooling.h"
#include "PC/GraphicsCard.h"
#include "PC/PowerSupply.h"
#include "PC/Processor.h"
#include "PC/Ram.h"
#include "PC/Storage.h"

using namespace std;

int main() {
    Storage storage{"samsung", "SSD", 1000, 2.5, 500, 500};
    RAM ram{"corsair", 16, 3200, 2, "DDR4"};
    Processor processor{"Intel", "Core i7", 8, 3.5};
    PowerSupply powerSupply{"EVGA", 750, "Gold", "ATX", true};
    GraphicsCard graphicsCard{"NVIDIA", "GeForce RTX 3070", 8, "GDDR6", 1500, 1725, 220};
    Cooling cooling{"Cooler Master", "Hyper 212", 2000, 25};
    Motherboard motherboard{"ASUS", "ROG Strix B450-F Gaming", processor, storage, ram, "AM4", 3, "ATX"};
    Pc pc{graphicsCard, motherboard, powerSupply, cooling};

    // Print the ram brand to the console
    // cout << pc.motherBoard.ram.getBrand();

    return 0;
}
