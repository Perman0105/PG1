#ifndef LOTTO_H
#define LOTTO_H

#include "spieler.h"

class Lotto
{
public:
    Lotto();
    void dialog();
    void setzen();
    void ziehen();
    void ausgabe();
private:
    vector <Spieler> player;
    vector <int> gewinner;
};

#endif // LOTTO_H
