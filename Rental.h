
#include "Auto.h"
#include "Kunde.h"
#include "Reservierung.h"
#include <vector>
class Rental
{
private:
	std::vector<Reservierung> reservierungList;
public:

	Rental();

	void reserve_auto(Auto aut, Kunde person, int Tagesanzahl);

};