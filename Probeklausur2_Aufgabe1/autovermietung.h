#ifndef AUTOVERMIETUNG_H
#define AUTOVERMIETUNG_H

#include "mietwagen.h"

class Autovermietung
{
public:
    Autovermietung();
    void dialog();
private:
    vector <Mietwagen*> fahrzeuge;
};

#endif // AUTOVERMIETUNG_H
