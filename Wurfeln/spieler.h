#ifndef SPIELER_H
#define SPIELER_H

#include <iostream>
#include <vector>

using namespace std;
class Spieler
{
public:
    Spieler();
    void setName(string name);
    string getName();
    void setNumber(int nummer);
    int getNumber(int pos);
    int getPunkt();
private:
    string name;
    int punkt=0;
    vector <int> number;
};

#endif // SPIELER_H
