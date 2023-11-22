#include "arztpraxis.h"

Arztpraxis::Arztpraxis()
{

}

void Arztpraxis::terminAnlegen(string patient, string datumUhrzeit,int impfstoff)
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
            terminAnlegen(patient,newDatumUhrzeit,impfstoff);
            check_gleich=true;
            break;
        }
    }
    if(check_gleich==false)
    {
        Termin t(patient,datumUhrzeit,impfstoff);
        terminListe.push_back(t);
        cout<<"+)Termin wurde eingetragen"<<endl;
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
            cout<<"-Termin "<<terminListe[i].getDatumUhrzeit()<<" fuer "<< patient<<" geloescht "<<endl;
            check=true;
        }
    }
    if(check==false)
    {
        cout<<"-Keine Termin zu diesem Namen gefunden"<<endl;
    }
}
