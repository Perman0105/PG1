#include "spielfeld.h"

Spielfeld::Spielfeld()
{

}
void Spielfeld :: menu()
{
    cout<<"-----Menu-----"<<endl;
    cout<<"[n]: Neues Spiel"<<endl;
    cout<<"[z]: Spielzeug durchfuehren"<<endl;
    cout<<"[a]: Anzeige des Spielfeldes"<<endl;
    cout<<"[x]: Beenden"<<endl;
    cout<<"-Taste: ";
    char taste; cin>>taste;
    while(taste != 'x')
    {
        switch(taste)
        {
            case 'n':
            {
                tabelle();
                break;
            }
            case 'z':
            {
                start();
                break;
            }
            case 'a':
            {
                anzeige();
                break;
            }
            default:
            {
                cout<<"!!! Falsche Taste !!!"<<endl;
                break;
            }
        }
        if(end==true)
        {
            break;
        }
        else
        {
            cout<<"-Taste: ";
            cin>>taste;
        }
    }
}
void Spielfeld :: tabelle()
{

    for(int i=0;i<7;i++)
    {
        for(int j=0;j<11;j++)
        {
            if(i%2==0)
            {
                if(j==3||j==7)
                {
                    spielfeld[i][j]="|";
                }
                else
                {
                    spielfeld[i][j]="-";
                }
            }
            else if (i%2!=0)
            {
                if(j==1||j==5||j==9)
                {
                    for(int l=position;l<9;l++)
                    {
                        spielfeld[i][j]=pos[l];
                        position++;
                        break;
                    }
                }
                else if(j==3||j==7)
                {
                    spielfeld[i][j]="|";
                }
                else
                {
                    spielfeld[i][j]=" ";
                }
            }
        }
    }
    cout<<"+)Neue Tabelle wurde ausgestellt"<<endl;
}
void Spielfeld :: anzeige()
{
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<11;j++)
        {
                cout<<spielfeld[i][j];
        }
        cout<<endl;
    }
}
void Spielfeld :: start()
{
    for(int i=0;i<10;i++)
    {
        for(int i=0;i<7;i++)
        {
            for(int j=0;j<11;j++)
            {
                    cout<<spielfeld[i][j];
            }
            cout<<endl;
        }
        if(i%2==0)
        {
            int wahl;
            cout<<"SPIELER 1: "<<endl;
            cout<<"Sie sind X"<<endl;
            //string a=to_string(wahl);
            cout<<"Auswahl von Spieler 1: ";
            cin>>wahl;
            bool gleich;
            for(int i=0;i<check_gleich.size();i++)//Aufgabe 2 von
            {
                if(wahl==check_gleich[i])
                {
                    cout<<"!!!Fehlermeldung bei gleicher Nummer!!!"<<endl;
                    gleich=true;
                    break;
                }
            }
            if(gleich==true)
            {
                i--;
            } //Aufgabe 2 bis
            if(wahl>9||wahl<1)
            {
                cout<<"!!!Ungueliger Nummer!!!"<<endl;
                i--;
            }
            else
            {
                for(int i=0;i<7;i++)
                {
                    for(int j=0;j<11;j++)
                    {
                        if(spielfeld[i][j]==to_string(wahl))
                        {
                            spielfeld[i][j]="X";
                            s1.add_gewinn(wahl);
                            check_gleich.push_back(wahl);
                            break;
                        }
                    }
                }
                if(s1.check()==true)
                {
                    cout<<"Spieler 1 ist Gewinnger"<<endl;
                    end=true;
                    break;
                }
            }
        }
        else
        {
            int wahl;
            cout<<"SPIELER 2: "<<endl;
            cout<<"Sie sind O"<<endl;
            cout<<"Auswahl von Spieler 2: ";
            cin>>wahl;
            bool gleich;
            for(int i=0;i<check_gleich.size();i++)//Aufgabe 2: von
            {
                if(wahl==check_gleich[i])
                {
                    cout<<"!!!Fehlermeldung bei gleichem Nummer!!!"<<endl;
                    gleich=true;
                    break;
                }
            }
            if(gleich==true)
            {
                i--;
            }//Aufgabe 2: bis
            if(wahl>9||wahl<1)
            {
                cout<<"!!!Fehlermeldung!!!"<<endl;
                i--;
            }
            else
            {
                for(int i=0;i<7;i++)
                {
                    for(int j=0;j<11;j++)
                    {
                        if(spielfeld[i][j]==to_string(wahl))
                        {
                            spielfeld[i][j]="O";
                            s2.add_gewinn(wahl);
                            check_gleich.push_back(wahl);
                            break;
                        }
                    }

                }
                if(s2.check()==true)
                {
                     cout<<"Spieler 2 ist Gewinnger"<<endl;
                     end=true;
                    break;
                }
            }
        }
    }
}
