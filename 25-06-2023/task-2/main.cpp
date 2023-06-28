#include <iostream>
#include "ForeignPassport.h"

int main() {
    ForeignPassport foreignPassport{"John", 123456789, "Nationality", new Date{12, 3, 1990}, "Male", new Date{1, 1, 2023}, new Date{1, 1, 2028}, "Place of Issue", "Tourist", 987654321, new Date{1, 1, 2023}, new Date{1, 1, 2024}, "Country of Issue"};
    return 0;
}
