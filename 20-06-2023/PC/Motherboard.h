#ifndef INC_01_06_2023_MOTHERBOARD_H
#define INC_01_06_2023_MOTHERBOARD_H


#include <string>
#include "Processor.h"
#include "Ram.h"
#include "Storage.h"
#include "PcComponent.h"
using namespace std;

struct Motherboard: public PcComponent {
private:
    string socket;
    int pciExpressSlots;
    string formFactor;
public:
    Processor* processor{};
    Storage* storage{};
    RAM* ram{};
    Motherboard() = default;
    Motherboard(const string& brand, const string& model, Processor *processor, Storage *storage, RAM *ram,  const string& socket,
                int pciExpressSlots, const string& formFactor);

    string getSocket() const;
    int getPciExpressSlots() const;
    string getFormFactor() const;
};



#endif
