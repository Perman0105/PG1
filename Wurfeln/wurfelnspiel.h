#ifndef WURFELNSPIEL_H
#define WURFELNSPIEL_H

#include "spieler.h"
#include "spieler.cpp"

class Wurfelnspiel
{
public:
    Wurfelnspiel();
    void dialog();
    void neuesSpiel();
    void neuerDurchgang();
    void anzeige();
private:
    vector <Spieler> player;
    vector <int> wurfeln;
};

#endif // WURFELNSPIEL_H
