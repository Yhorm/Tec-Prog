#include "pessoa.h"

Pessoa::Pessoa(int dia, int mes, int ano, std::string nome)
{
	bDay = dia;
	bMonth = mes; 
	bYear = ano;
	pName = nome;
	age = -1;
}


void Pessoa::calc_age(int dia, int mes, int ano)
{
	age = ano - bYear;

	if (bMonth < mes)
	{
		--age;
	} 
	else if (bMonth == mes)
	{
		if (dia > bDay)
		{
			--age;
		}
	} 
}

void Pessoa::getAge()
{
	std::cout << "a idade de " << pName << " ";
	printf("eh: %d\n", age);
	std::cout << "\n";
}

void Pessoa::getBirthdate()
{
	std::cout << "A data de nascimento de " << pName << " ";
	printf("eh: %d/%d/%d\n", bDay, bMonth, bYear);
	std::cout << "\n";
}

void Pessoa::getName()
{
	std::cout << "O nome da pessoa eh: " << pName << "\n";
	std::cout << "\n";
}