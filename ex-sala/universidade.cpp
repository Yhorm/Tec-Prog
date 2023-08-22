#include <iostream>
#include "universidade.h"

using namespace std;


Universidade::Universidade(std::string nome)
{
	Inicializa(nome);
}

Universidade::Universidade()
{
}

Universidade::~Universidade()
{
}

void Universidade::Inicializa(std:: string nome)
{
	setName(nome);
}

void Universidade::setName(std::string nome)
{
	uName = nome;
}

string Universidade::getUniName()
{
	return uName;
}

void Universidade::printUniName()
{
	cout << "O nome da universidade eh: " << uName << endl;
}

void Universidade::setDep(Departamento* dep)
{
	depAfil = dep;
}