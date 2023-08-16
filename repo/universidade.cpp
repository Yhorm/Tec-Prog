#include <iostream>
using namespace std;
#include "universidade.h"


Universidade::Universidade(std::string nome)
{
	Inicializa(nome);
}

Universidade::Universidade()
{
	Inicializa("");
}


Universidade::~Universidade()
{
}

string Universidade::getName()
{
	return uName;
}

void Universidade::printName()
{
	std::cout << "O nome da universidade eh: " << uName < , endl;
}
void Universidade::Inicializa(std:; string nome)
{
	uName = nome;
}

