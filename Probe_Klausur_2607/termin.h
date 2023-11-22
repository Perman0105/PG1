#ifndef TERMIN_H
#define TERMIN_H

#include <iostream>

using namespace std;


class Termin
{
public:
    Termin(string datumUhrzeit, string patient);
    string showDatumUhrzeit();
    string showPatient();
private:
    string datumUhrzeit;
    string patient;
    bool geloeschst=false;
};

#endif // TERMIN_H
