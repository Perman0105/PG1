#include "spieler.h"

Spieler::Spieler()
{

}
void Spieler :: add_gewinn(int a)
{
    gewinn.push_back(a-1);
}
bool Spieler :: check ()
{
        if((gewinn[0]+1)==gewinn[1]&&(gewinn[0]+2)==gewinn[2])
        {
            return true;
        }
        if((gewinn[0]+3)==gewinn[1]&&(gewinn[0]+6)==gewinn[2])
        {
            return true;
        }
        if((gewinn[0]+2)==gewinn[1]&&(gewinn[0]+4)==gewinn[2])
        {
            return true;
        }
        if((gewinn[0]+4)==gewinn[1]&&(gewinn[0]+8)==gewinn[2])
        {
            return true;
        }
}

