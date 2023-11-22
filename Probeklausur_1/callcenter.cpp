#include "callcenter.h"

Callcenter::Callcenter()
{

}

void Callcenter::dialog()
{
    cout<<"---Menu---"<<endl;
    cout<<"1: Termin anlegen"<<endl;
    cout<<"2: Termin loeschen"<<endl;
    cout<<"0: Programm beenden"<<endl;
    char taste;
    cout<<"Taste: "; cin>>taste;
    while(taste != '0')
    {
        switch(taste)
        {
            case '1':
            {
                string name;
                cout<<"-Name? "; cin>>name;
                string datumUhrzeit;
                cout<<"-Datumuhrzeit? "; cin>>datumUhrzeit;
                arztpraxis.terminAnlegen(name,datumUhrzeit);
                break;
            }
            case '2':
            {
                string name;
                cout<<"Name? ";cin>>name;
                arztpraxis.terminLoeschen(name);
                break;
            }
            default:
            {
                cout<<"!!!Fehlermeldung!!!"<<endl;
                break;
            }
        }
        cout<<"Taste: "; cin>>taste;
    }
}
