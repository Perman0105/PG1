#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

using namespace std;

class Fraction
{
public:
    Fraction();
    Fraction(int n=0, int d=1);
    ~Fraction();
    Fraction(const Fraction &f);
    Fraction& operator=(const Fraction &f);
    Fraction add(const Fraction &f);
    Fraction subtract(const Fraction&);
    Fraction multiply(const Fraction&);
    Fraction divide(const Fraction&);
    void read();
    void print();
    int gcd(int, int);
    void cancel();
    void format();
private:
    int numerator;
    int denominator;
};

#endif // FRACTION_H
