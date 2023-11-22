#include <iostream>
#include "fraction.h"
#include "fraction.cpp"
using namespace std;

int main()
{
    cout<<"Konstruktor aufgerufen"<<endl;
    int zaehler;
    cout<<"Zaehler: "; cin>>zaehler;
    int nenner;
    cout<<"Nenner: "; cin>>nenner;
    Fraction f(zaehler,nenner);
}
