#include "callcenter.h"

callcenter::callcenter()
{

}
void callcenter :: dialog()
{
    char taste;
    cout<<"---Menu---"<<endl;
    cout<<"1: Termin anlegen"<<endl;
    cout<<"2: Termin loeschen"<<endl;
    cout<<"0: Progamm beenden"<<endl;
    cout<<"-Taste: "; cin>>taste;
    while(taste != '0')
    {
        switch(taste)
        {
            case '1':
            {
                string patient;
                cout<<"Name? ";
                string datumUhrzeit;
                cout<<"Datumuhrzeit? ";
                cin>>datumUhrzeit;
                arztpraxis.terminAnlegen(patient,datumUhrzeit);
                break;
            }
            case '2':
            {
                string name;
                cout<<"Name? "; cin>>name;
                arztpraxis.terminLoeschen(name);
                break;
            }
            default:
            {
                cout<<"Fehlermeldung"<<endl;
                break;
            }
        }
        cout<<"-Taste: ";cin>>taste;
    }
}
