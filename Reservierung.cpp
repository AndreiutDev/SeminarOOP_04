#include "Reservierung.h"

Reservierung::Reservierung(int tg, Auto other, Kunde pers)
{
	this->aut.SetId(other.GetId());
	this->aut.SetMarke(other.GetMarke());
	this->aut.SetModell(other.GetModell());
	this->Tagesanzahl = tg;
	this->person.SetId(pers.GetId());
	this->person.SetName(pers.GetName());
}