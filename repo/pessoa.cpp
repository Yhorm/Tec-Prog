#include "pessoa.h"

Pessoa::Pessoa(int dia, int mes, int ano, std::string nome)
{
	Inicializa(dia, mes, ano, nome);
}

Pessoa::Pessoa()
{
	Inicializa(0, 0, 0);
}

Pessoa::~Pessoa()
{

}

void Pessoa::Inicializa(int dia, int mes, int ano, std::string nome)
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

void Pessoa::printAge()
{
	std::cout << "a idade de " << pName << " ";
	printf("eh: %d\n", age);
	std::cout << "\n";
}

void Pessoa::printBirthdate()
{
	std::cout << "A data de nascimento de " << pName << " ";
	printf("eh: %d/%d/%d\n", bDay, bMonth, bYear);
	std::cout << "\n";
}

void Pessoa::printName()
{
	std::cout << "O nome da pessoa eh: " << pName << "\n";
	std::cout << "\n";
}

int Pessoa::getAge()
{
	return age;
}

int Pessoa::getBirthdate()
{
	return (bDay, bMonth, bYear);
}

string Pessoa::getName()
{
	return pName;
}