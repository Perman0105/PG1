#ifndef TERMIN_H
#define TERMIN_H

#include <iostream>

using namespace std;

class Termin
{
public:
    Termin();
    Termin(string patient, string datumUhrzeit);
    string getDatumUhrzeit() const;

    string getPatient() const;

private:
    string datumUhrzeit;
    string patient;
    bool geloeschst=false;
};

#endif // TERMIN_H
