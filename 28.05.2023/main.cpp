#include "Fraction.h"

int main() {
    Fraction fraction1{3, 5};
    Fraction fraction2{1, 5};
    Fraction result{};

    // Perform addition
    result = fraction1.add(fraction2);
    cout << "Addition: ";
    result.showFraction();

    // Perform subtraction
    result = fraction1.subtract(fraction2);
    cout << "Subtraction: ";
    result.showFraction();

    // Perform multiplication
    result = fraction1.multiply(fraction2);
    cout << "Multiplication: ";
    result.showFraction();

    // Perform division
    result = fraction1.divide(fraction2);
    cout << "Division: ";
    result.showFraction();
  return 0;
}
