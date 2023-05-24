#include "Fraction.h"

void Fraction::setFraction(const float numerator, const float denominator) {
  this->numerator = numerator;

  if (denominator == 0) {
    cout << "ERROR: Invalid denominator" << endl;
    return;
  }

  this->denominator = denominator;
}

void Fraction::showFraction() const {
    cout << this->numerator << '/' << this->denominator << endl;
}


Fraction Fraction::add(Fraction otherFraction) const {
    Fraction result{};
    if (this->denominator == otherFraction.denominator) {
        result.numerator = this->numerator + otherFraction.numerator;
        result.denominator = this->denominator;
    }
    else {
        result.numerator = (this->numerator * otherFraction.denominator) + (otherFraction.numerator * denominator);
        result.denominator = this->denominator * otherFraction.denominator;
    }
    return result;
}

Fraction Fraction::subtract(const Fraction otherFraction) const {
    Fraction result{};
    if (this->denominator == otherFraction.denominator) {
        result.numerator = this->numerator - otherFraction.numerator;
        result.denominator = this->denominator;
    }
    else {
        result.numerator = (this->numerator * otherFraction.denominator) - (otherFraction.numerator * denominator);
        result.denominator = this->denominator * otherFraction.denominator;
    }
    return result;
}

Fraction Fraction::multiply(const Fraction otherFraction) const {
    Fraction result{};
    result.numerator = this->numerator * otherFraction.numerator;
    result.denominator = this->denominator * otherFraction.denominator;
    return result;
}

Fraction Fraction::divide(const Fraction otherFraction) const {
    Fraction result;
    if (otherFraction.numerator != 0) {
        result.numerator = this->numerator * otherFraction.denominator;
        result.denominator = this->denominator * otherFraction.numerator;
    } else {
       cout << "ERROR: Cannot divide by zero." << endl;
    }
    return result;
}



Fraction::Fraction(const float numerator, const float denominator) {
    setFraction(numerator, denominator);
}
