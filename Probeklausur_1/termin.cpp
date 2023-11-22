#include "termin.h"

Termin::Termin()
{

}

Termin::Termin(string patient, string datumUhrzeit)
{
    this->patient=patient;
    this->datumUhrzeit=datumUhrzeit;
}

string Termin::getDatumUhrzeit() const
{
    return this->datumUhrzeit;
}

string Termin::getPatient() const
{
    return this->patient;
}
