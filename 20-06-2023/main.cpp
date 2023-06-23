#include <iostream>
#include "PC/Pc.h"

int main() {
    Pc pc{
        new GraphicsCard{"NVIDIA", "GeForce RTX 3070", 8, "GDDR6", 1500, 1725, 220},
        new Motherboard{"ASUS", "ROG Strix B450-F Gaming",
                        new Processor{"Intel", "Core i7", 8, 3.5},
                        new Storage{"samsung", 1000, "SSD", 2.5, 500, 500},
                        new RAM{"corsair", 16, 3200, 2, "DDR4"},
                        "AM4", 3, "ATX"},
        new PowerSupply{"EVGA", "SuperNova", 750, "Gold", "ATX", true},
        new Cooling{"Cooler Master", "Hyper 212", 2000, 25}
        };
}
