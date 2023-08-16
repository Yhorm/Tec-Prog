#include <iostream>
#include "pessoa.h"

using namespace std;


void main()
{
	Pessoa Einstein(14, 3, 1879, "Albert Einstein");
	Pessoa Newton(4, 1, 1643, "Isaac Newton");

	Einstein.calc_age(15, 8, 2023);
	Newton.calc_age(15, 8, 2023);
	
	Einstein.getAge();
	Einstein.getBirthdate();
	Einstein.getName();

	Newton.getAge();
	Newton.getBirthdate();
	Newton.getName();
}