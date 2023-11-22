#include "wurfelnspiel.h"

Wurfelnspiel::Wurfelnspiel()
{

}

void Wurfelnspiel::dialog()
{
    cout<<"=========Menu========="<<endl;
    cout<<"(n): Neues Spiel"<<endl;
    cout<<"(d): Neuer Durchgang"<<endl;
    cout<<"(a): Anzeige des Spielstands"<<endl;
    cout<<"(x): Beenden"<<endl;
    char taste;
    cout<<"-Taste: "; cin>>taste;
    while(taste)
    {
        switch(taste)
        {
            case 'n':
            {
                neuesSpiel();
                break;
            }
            case 'd':
            {
                neuerDurchgang();
                break;
            }
            case 'a':
            {
                anzeige();
                break;
            }
            default:
            {
                cout<<"!!!Fehlermeldung!!!"<<endl;
                break;
            }
        }
        cout<<"-Taste: "; cin>>taste;
    }
}

void Wurfelnspiel::neuesSpiel()
{
    player.clear();
    wurfeln.clear();
    for(int i=0;i<6;i++)
    {
        wurfeln.push_back(i+1);
    }
    for(int i=0;i<4;i++)
    {
        Spieler s;
        string name;
        cout<<"+)Name von Spieler "<<i+1<<" : "; cin>>name;
        s.setName(name);
        player.push_back(s);
    }
}

void Wurfelnspiel::neuerDurchgang()
{
    if(wurfeln.size()==0||player.size()==0)
    {
        cout<<"!!!Spiel wurde noch nicht erstellt!!!"<<endl;
    }
    else
    {
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<3;j++)
            {
                int r = 1+ rand() % (6 + 1 - 1);
                player[i].setNumber(r);
            }
            cout<<"+)Spieler "<<i+1<<" hat Punkte bekommen"<<endl;
        }
    }
}

void Wurfelnspiel::anzeige()
{

    if(wurfeln.size()==0||player.size()==0)
    {
        cout<<"!!!Spiel wurde noch nicht erstellt!!!"<<endl;
    }
    else
    {
        for(int i=0;i<4;i++)
        {
            cout<<"------PLayer "<<i+1<<"------"<<endl;
            cout<<"-Name: "<<player[i].getName()<<endl;
            cout<<"-Punkte: "<<player[i].getPunkt()<<endl;
            cout<<"-Zahlen: ";
            for(int j=0;j<3;j++)
            {
                cout<<player[i].getNumber(j)<<" ";
            }
            cout<<endl;
        }
    }
}
