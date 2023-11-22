#ifndef SPIELER_H
#define SPIELER_H

#include <iostream>

#include <vector>

using namespace std;

class Spieler
{
public:
    Spieler();
    void setZettel(int nummer);
    int getZettel(int pos);
    void gewinner(int nummer);
    int getGleichNummer();

private:
    vector <int> zettel;
    int gleichNummer=0;
};

#endif // SPIELER_H
