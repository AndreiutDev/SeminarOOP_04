#pragma once
#include "Auto.h"
#include "Kunde.h"

class Reservierung
{
private:
	Kunde person;
	Auto aut;
	int Tagesanzahl;
public:
	Reservierung(int tg, Auto aut, Kunde pers);
	
	void SetTagesanzahl(int other) { Tagesanzahl = other; }
	void SetAut(Auto other) {
		this->aut.SetId(other.GetId());
		this->aut.SetMarke(other.GetMarke());
		this->aut.SetModell(other.GetModell());
	}
	void SetPerson(Kunde other) { person.SetId(other.GetId()); person.SetName(other.GetName()); }

	Kunde GetPerson() { return person; }
	Auto GetAut() { return aut; }
	int GetTagesanzahl() { return Tagesanzahl; }
};

