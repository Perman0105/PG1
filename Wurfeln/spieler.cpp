#include "spieler.h"

Spieler::Spieler()
{

}

string Spieler::getName()
{
    return this->name;
}
void Spieler::setName(string name)
{
    this->name=name;
}
void Spieler::setNumber(int nummer)
{
    number.push_back(nummer);
}

int Spieler::getNumber(int pos)
{
    return this->number[pos];
}
int Spieler::getPunkt()
{
    if(number.size()==3)
    {
        int a=0;
        for(int i=0;i<number.size();i++)
        {
            a=punkt+number[i];
            punkt=a;
        }
    }
    return this->punkt;
}

