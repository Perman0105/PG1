#ifndef TERMIN_H
#define TERMIN_H

#include <iostream>

using namespace std;
enum Impfstoff{Biontech=1, Mordena=2, AstraZeneca=3, JohnsonJohson=4};

class Termin
{
public:
    Termin();
    Termin(string patient, string datumUhrzeit, int impstoff);
    string getDatumUhrzeit() const;
    string getPatient() const;

private:
    string datumUhrzeit;
    string patient;
    int impfstoff;
    bool geloeschst=false;
};

#endif // TERMIN_H
