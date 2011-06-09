#include "fraction.h"

Fraction::Fraction(int numerator, int denominator){
    if(denominator == 0) throw DivisionByZeroException();
    n = numerator;
    d = denominator;
}

bool Fraction::operator ==(const Fraction & other) const{
    return(n * other.d == d * other.n);
}

Fraction Fraction::operator /(const Fraction & other) const{
    if(other.n == 0) throw DivisionByZeroException();
    return Fraction(n * other.d, d * other.n);
}
