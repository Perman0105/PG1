#include "termin.h"

Termin::Termin()
{

}

Termin::Termin(string patient, string datumUhrzeit, int impfstoff)
{
    this->patient=patient;
    this->datumUhrzeit=datumUhrzeit;
    switch(impfstoff)
    {
        case 1:
        {
            cout<<"Biontech"<<endl;
            this->impfstoff=impfstoff;
            break;
        }
        case 2:
        {
            cout<<"Mordena"<<endl;
            this->impfstoff=impfstoff;
            break;
        }
        case 3:
        {
            cout<<"Astra Zeneca"<<endl;
            this->impfstoff=impfstoff;
            break;
        }
        case 4:
        {
            cout<<"Johnson & Johnson"<<endl;
            this->impfstoff=impfstoff;
            break;
        }
        default:
        {
            cout<<"!!!Falsche Impfstoff!!!"<<endl;
            int impstoff;
            cout<<"-Bitte neue Impfstoff eingeben: "; cin>>impfstoff;
            break;
        }
    }
}

string Termin::getDatumUhrzeit() const
{
    return this->datumUhrzeit;
}

string Termin::getPatient() const
{
    return this->patient;
}

