#include "arztpraxis.h"

Arztpraxis::Arztpraxis()
{

}

void Arztpraxis::terminAnlegen(string patient, string datumUhrzeit)
{
    bool check_gleich=false;
    for(int i=0;i<terminListe.size();i++)
    {
        if(datumUhrzeit==terminListe[i].getDatumUhrzeit())
        {
            string newDatumUhrzeit;
            cout<<"Termin "<<datumUhrzeit<<" ist schon vergeben.";
            cout<<"Bitte neunen Termin eingeben ";
            cin>>newDatumUhrzeit;
            terminAnlegen(patient,newDatumUhrzeit);
            check_gleich=true;
            break;
        }
    }
    if(check_gleich==false)
    {
        cout<<"+)Termin wurde eingetragen"<<endl;
        Termin t(patient,datumUhrzeit);
        terminListe.push_back(t);
    }
}

void Arztpraxis::terminLoeschen(string patient)
{
    bool check=false;
    for(int i=0;i<terminListe.size();i++)
    {
        if(terminListe[i].getPatient()==patient)
        {
            terminListe.erase(terminListe.begin()+i);
            cout<<"-Termin wurde geloescht"<<endl;
            check=true;
            break;
        }
    }
    if(check==false)
    {
        cout<<"-Keine Termin zu diesem Namen gefunden"<<endl;
    }
}
