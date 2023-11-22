#ifndef SPIELFELD_H
#define SPIELFELD_H

#include "spieler.h"
#include "spieler.cpp"
#include <string.h>

using namespace std;


class Spielfeld
{
public:
    Spielfeld();
    void menu();
    void tabelle();
    void start();
    void anzeige();
private:
    vector <Spieler> spieler;
    string spielfeld[7][11];
    string pos[9]={"1","2","3","4","5","6","7","8","9"};
    int position=0;
    Spieler s1;
    Spieler s2;
    vector <int> check_gleich;
    bool end;
};

#endif // SPIELFELD_H
