#ifndef INC_28_05_2023_FRACTION_H
#define INC_28_05_2023_FRACTION_H

#include <iostream>
using namespace std;

class Fraction {
private:
  float numerator;
  float denominator;

public:
  void setFraction(float numerator, float denominator);
  void showFraction() const;

  Fraction add(Fraction fraction) const;
  Fraction subtract(Fraction fraction) const;
  Fraction multiply(Fraction fraction) const;
  Fraction divide(Fraction fraction) const;

  Fraction(float numerator, float denominator);
  Fraction() = default;
};

#endif
