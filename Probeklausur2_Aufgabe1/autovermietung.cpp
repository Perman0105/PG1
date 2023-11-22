#include "autovermietung.h"

Autovermietung::Autovermietung()
{

}

void Autovermietung::dialog()
{
    Mietwagen *m=new Mietwagen;
    cout<<"-Neues Fahrzeug:"<<endl;
    string automarke;
    cout<<"+)Automarke? "; cin>>automarke;
    string kennzeichen;
    cout<<"+)KFZ-Kennzeichen? "; cin>>kennzeichen;
    int sitze;
    cout<<"+)Sitze? "; cin>>sitze;
    cout<<"-->Fahrzeug "<<automarke<<" mit KFZ-Kennzeichen "<<kennzeichen<< " und "<< sitze<< " wurde aufgenommen"<<endl;
    cout<<"---Menu---"<<endl;
    cout<<"1: Fahrzeug mieten"<<endl;
    cout<<"2: Fahrt anzeigen"<<endl;
    cout<<"3: Alle Fahrten anzeigen"<<endl;
    cout<<"0: Programm beenden"<<endl;
    char taste;
    cout<<"-Taste: ";cin>>taste;
    while(taste!='0')
    {
        switch(taste)
        {
            case '1':
            {
                int buchungsnummer;
                cout<<"+)Buchungsnummer: "; cin>>buchungsnummer;
                string kunde;
                cout<<"+)Kunde: "; cin>>kunde;
                int abholdatum;
                cout<<"+)Abholdatum: "; cin>>abholdatum;
                int abgabedatum;
                cout<<"+)Abgabedatum: "; cin>>abgabedatum;
                Fahrt f(buchungsnummer,kunde,abholdatum,abgabedatum);
                m->anmieten(f);
                break;
            }
            case '2':
            {
                int buchungsnummer;
                cout<<"+)Buchungsnummer? "; cin>>buchungsnummer;
                m->fahrtAnzeigen(buchungsnummer);
                break;
            }
            case '3':
            {
                m->alleFahrtenAnzeige();
                break;
            }
            default:
            {
                cout<<"!!!Fehlermeldung!!!"<<endl;
                break;
            }
        }
       cout<<"-Taste: ";cin>>taste;
    }
}
