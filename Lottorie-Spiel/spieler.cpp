#include "spieler.h"

Spieler::Spieler()
{

}

void Spieler::setZettel(int nummer)
{
    zettel.push_back(nummer);
}

int Spieler::getZettel(int pos)
{
    return this->zettel[pos];
}

void Spieler::gewinner(int nummer)
{
    for(int i=0;i<7;i++)
    {
        if(zettel[i]==nummer)
        {
            gleichNummer++;
            break;
        }
    }
}

int Spieler::getGleichNummer()
{
    return this->gleichNummer;
}
