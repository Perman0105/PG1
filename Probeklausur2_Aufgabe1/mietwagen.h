#ifndef MIETWAGEN_H
#define MIETWAGEN_H

#include "fahrt.h"
#include <vector>

class Mietwagen
{
public:
    Mietwagen();
    void anmieten(Fahrt f);
    void fahrtAnzeigen(int nummer);
    void alleFahrtenAnzeige();
private:
    string marke;
    string kennzeichen;
    int size;
    vector <Fahrt> fahrtebuch;

};

#endif // MIETWAGEN_H
