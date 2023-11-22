#ifndef ARZTPRAXIS_H
#define ARZTPRAXIS_H

#include "termin.h"
#include <vector>

class Arztpraxis
{
public:
    Arztpraxis();
    void terminAnlegen(string patient, string datumUhrzeit, int impfstoff);
    void terminLoeschen(string patient);
private:
    const string name ="Dr.Koch";
    vector <Termin> terminListe;
};

#endif // ARZTPRAXIS_H
