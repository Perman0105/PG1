#include "fahrt.h"

Fahrt::Fahrt()
{

}

Fahrt::Fahrt(int n, string k, int ab, int bis)
{
    this->nummer=n;
    this->kunde=k;
    this->abholdatum=ab;
    this->abgabedatum=bis;

}

void Fahrt::anzeige()
{

}

int Fahrt::getNummer()
{
    return this->nummer;
}

string Fahrt::getKunde() const
{
    return kunde;
}

int Fahrt::getAbholdatum() const
{
    return abholdatum;
}

int Fahrt::getAbgabedatum() const
{
    return abgabedatum;
}
