#ifndef ARZTPRAXIS_H
#define ARZTPRAXIS_H

#include "termin.h"
#include <string.h>
#include <vector>

using namespace std;

class Arztpraxis
{
public:
    Arztpraxis();
    void terminAnlegen(string patient, string datumUhrzeit);
    void terminLoeschen(string patient);
private:
    const string name="Dr. Koch";
    vector <Termin> terminListe;
};

#endif // ARZTPRAXIS_H
