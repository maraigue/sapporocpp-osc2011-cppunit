#ifndef _FRACTION_H_
#define _FRACTION_H_

class Fraction{
private:
    int n, d;
    
public:
    class DivisionByZeroException{ };
    Fraction(int numerator, int denominator);
    bool operator ==(const Fraction & other) const;
    Fraction operator /(const Fraction & other) const;
};

#endif // _FRACTION_H_
