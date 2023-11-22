#include "mietwagen.h"

Mietwagen::Mietwagen()
{

}

void Mietwagen::anmieten(Fahrt f)
{
    fahrtebuch.push_back(f);
    cout<<"Fahrt "<<f.getNummer()<<" erfolgreich angelegt"<<endl;
}

void Mietwagen::fahrtAnzeigen(int nummer)
{
    bool check=false;
    for(int i=0;i<fahrtebuch.size();i++)
    {
        if(fahrtebuch[i].getNummer()==nummer)
        {
            check=true;
            cout<<"+)Nr. "<<nummer<<": Kunde "<<fahrtebuch[i].getKunde()<<" holt Fahrzeug am "<<fahrtebuch[i].getAbholdatum()<< "ab und bringt es am "<<fahrtebuch[i].getAbgabedatum()<<" zurueck"<<endl;
            break;
        }
    }
    if(check==false)
    {
        cout<<"!!!Fahrt existiert nicht!!!"<<endl;
    }
}

void Mietwagen::alleFahrtenAnzeige()
{
    for(int i=0;i<fahrtebuch.size();i++)
    {
         cout<<"+)Nr. "<<fahrtebuch[i].getNummer()<<": Kunde "<<fahrtebuch[i].getKunde()<<" holt Fahrzeug am "<<fahrtebuch[i].getAbholdatum()<< "ab und bringt es am "<<fahrtebuch[i].getAbgabedatum()<<" zurueck"<<endl;
         cout<<"-------------------------------------------------------"<<endl;
    }
}
