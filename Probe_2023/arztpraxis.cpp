#include "arztpraxis.h"
#define log(x) std::cout << x << std::endl;
Arztpraxis::Arztpraxis()
{

}
void Arztpraxis :: terminAnlegen(string patient, string datumUhrzeit)
{
   bool check=false;
   for(int i=0;i<terminListe.size();i++)
   {
       log("list: " <<terminListe[i].showDatumUhrzeit());
       log("new: " << datumUhrzeit);

       if(terminListe[i].showDatumUhrzeit()==datumUhrzeit)
       {
           check=true;
           cout<<"Dieser Termin is chon vergeben.";
           cout<<"Bitte neuen Termin eingeben: ";
           string newDatumUhrzeit;
           cin>>newDatumUhrzeit;
           terminAnlegen(patient,newDatumUhrzeit);
           break;
       }
   }
   if(check==false)
   {
       Termin t(datumUhrzeit, patient);
       terminListe.push_back(t);
       cout<<"Termin wurde eingetragen"<<endl;
   }
}
void Arztpraxis :: terminLoeschen(string patient)
{
    bool check_gleich=false;
    for(int i=0;i<terminListe.size();i++)
    {
            if(terminListe[i].showPatient()==patient)
            {
                terminListe.erase(terminListe.begin()+i);
                cout<<"Termin wurde geloescht"<<endl;
                check_gleich=true;
                break;
            }
    }
    if(check_gleich==false)
    {
        cout<<" Kein Termin zu diesem Namen gefunden"<<endl;
    }
}
