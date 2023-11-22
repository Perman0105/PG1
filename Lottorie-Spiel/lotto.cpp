#include "lotto.h"

Lotto::Lotto()
{

}

void Lotto::dialog()
{
    cout<<"===Menu==="<<endl;
    cout<<"1 Tippzettel ausfuellen"<<endl;
    cout<<"2 Glueckszahlen ziehen"<<endl;
    cout<<"3 Gewinner bekannt geben "<<endl;
    cout<<"0 BEENDEN"<<endl;
    int taste;
    cout<<"Auswahl (0-3): "; cin>>taste;
    while(taste != 0)
    {
        switch(taste)
        {
            case 1:
            {
                setzen();
                break;
            }
            case 2:
            {
                ziehen();
                break;
            }
            case 3:
            {
                ausgabe();
                break;
            }
            default:
            {
                cout<<"!!!Fehlermeldung!!!"<<endl;
                break;
            }
        }
       cout<<"Auswahl (0-3): "; cin>>taste;
    }
}

void Lotto::setzen()
{
    vector <int> nummer;
    for(int i=0;i<21;i++)
    {
        nummer.push_back(i+1);
    }
    for(int i=0;i<3;i++)
    {
        Spieler s;
        for(int j=0;j<7;j++)
        {
            int pos=rand() % (nummer.size() - 1 + 1) + 1; // int r = minN + rand() % (maxN + 1 - minN)
            s.setZettel(nummer[pos-1]);
            nummer.erase(nummer.begin()+pos-1);
        }
        player.push_back(s);
        cout<<"Player "<<player.size()+1<<" hat ausgefuellen"<<endl;
    }
}

void Lotto::ziehen()
{
     vector <int> nummer;
     for(int i=0;i<21;i++)
     {
         nummer.push_back(i+1);
     }
    for(int i=0;i<7;i++)
    {
        int pos=1+rand()%(nummer.size()+1-1);
        gewinner.push_back(nummer[pos-1]);
        nummer.erase(nummer.begin()+pos-1);
    }
    cout<<"-Zufaellige Nummer: ";
    for(int i=0;i<7;i++)
    {
        cout<<gewinner[i]<<" ";
    }
    nummer.clear();
    cout<<endl;
}

void Lotto::ausgabe()
{
    if(player.size()==0||gewinner.size()==0)
    {
        cout<<"!!! Noch kein Spieler oder lucky Nummer!!!"<<endl;
    }
    else
    {
        vector <int> anzahl;
        for(int i=0;i<3;i++)
        {
            cout<<"-Player "<<i+1<<": \n";
            for(int j=0;j<7;j++)
            {
                cout<<player[i].getZettel(j)<<" ";
                player[i].gewinner(gewinner[j]);
            }
            anzahl.push_back(player[i].getGleichNummer());
            cout<<"\nPlayer "<<i+1<<" hat gesamt "<<player[i].getGleichNummer()<<" Punkt(e)!!!"<<endl;
            cout<<"-------------"<<endl;
        }
        for(int i=0;i<3;i++)
        {
            for(int j=i+1;j<3;j++)
            {
                if(anzahl[i]>anzahl[j])
                {
                    swap(anzahl[i],anzahl[j]);
                }
            }
        }
        for(int i=0;i<3;i++)
        {
            cout<<anzahl[i]<<" ";
        }
        cout<<"\nPlayer mit "<< anzahl[2]<<" Punkte hat gewonnen"<<endl;
    }
}
