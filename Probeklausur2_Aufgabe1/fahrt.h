#ifndef FAHRT_H
#define FAHRT_H

#include <iostream>

using namespace std;

class Fahrt
{
public:
    Fahrt();
    Fahrt(int n,string k,int ab,int bis);
    void anzeige();
    int getNummer();
    string getKunde() const;
    int getAbholdatum() const;
    int getAbgabedatum() const;

private:
    int nummer;
    string kunde;
    int abholdatum;
    int abgabedatum;
};

#endif // FAHRT_H
