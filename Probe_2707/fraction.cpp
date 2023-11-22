#include "fraction.h"

Fraction::Fraction()
{

}
Fraction::Fraction(int n, int d)
{
    this->numerator = n;
    this->denominator = d;
}
Fraction :: ~Fraction()
{
    cout<<"Delete Fraction"<<endl;
}
void Fraction :: read()
{
    cout<<this->numerator<<"/"<<this->denominator<<endl;
}
/*
Fraction Fraction :: add(const Fraction &f)
{

}*/
