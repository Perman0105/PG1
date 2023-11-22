#ifndef SPIELER_H
#define SPIELER_H

#include <iostream>
#include <vector>

using namespace std;

class Spieler
{
public:
    Spieler();
    void add_gewinn(int a);
    bool check ();
private:
    vector <int> gewinn;
};

#endif // SPIELER_H
