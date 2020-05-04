#include "Rental.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include "PKW.h"
#include "LKW.h"
Rental::Rental()
{

}

void Rental::reserve_auto(Auto aut, Kunde person, int Tagesanzahl)
{
	Reservierung res = Reservierung(Tagesanzahl, aut, person);
	reservierungList.push_back(res);
}