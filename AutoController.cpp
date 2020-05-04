#include "AutoController.h"
#include <iostream>

void AutoController::sort_autos()
{
	int i, j;
	Auto aux = Auto(-1, "", "");
	std::vector<Auto> cpy = findAll();

	for (i = 0; i < cpy.size(); i++)
		for (j = i; j < cpy.size(); j++)
			if (cpy[i].GetMarke() > cpy[j].GetMarke())
			{
				aux.SetId(cpy[i].GetId());
				aux.SetMarke(cpy[i].GetMarke());
				aux.SetModell(cpy[i].GetModell());
				cpy[i].SetId(cpy[j].GetId());
				cpy[i].SetMarke(cpy[j].GetMarke());
				cpy[i].SetModell(cpy[j].GetModell());
				cpy[j].SetId(aux.GetId());
				cpy[j].SetMarke(aux.GetMarke());
				cpy[j].SetModell(aux.GetModell());
			}
	std::cout << "Sortiert nach Marke: \n";
	for (i = 0; i < cpy.size(); i++)
		std::cout << "--- " + cpy[i].GetMarke() +" " + cpy[i].GetModell() + " ---\n";
}
