#include "fraction.h"

Fraction::Fraction(int numerator, int denominator){}
bool Fraction::operator ==(const Fraction & other) const { return false; }
Fraction Fraction::operator /(const Fraction & other) const { return *this; };
