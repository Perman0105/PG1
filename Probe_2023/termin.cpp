#include "termin.h"

Termin::Termin(string datumUhrzeit, string patient)
{
    this->datumUhrzeit=datumUhrzeit;
    this->patient=patient;
}
string Termin :: showDatumUhrzeit()
{
   return this->datumUhrzeit;
}
string Termin :: showPatient()
{
    return this->patient;
}
