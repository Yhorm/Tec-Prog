#include "pessoa.h"

Pessoa::Pessoa(int dia, int mes, int ano, std::string nome)
{
	Inicializa(dia, mes, ano, nome);
}

Pessoa::Pessoa()
{
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

void Pessoa::calcAge(int dia, int mes, int ano)
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


void Pessoa::setAfiliado(Universidade* pu)
{
	uniFiliado = pu;
}

void Pessoa::showAfiliacao()
{
	cout << "A pessoa " << pName << " esta afiliada a universidade " << uniFiliado->getUniName() << " ." << endl;
}

void Pessoa::setDepAfil(Departamento* dep)
{
	uniDepAfil = dep;
}

void Pessoa::showDepAfil()
{
	cout << "A pessoa " << pName << " esta afiliada a universidade " << uniFiliado->getUniName() << " e ao departamento " << uniDepAfil->getDepName() << endl;
}