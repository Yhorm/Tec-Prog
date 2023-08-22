#include "departamento.h"

Departamento::Departamento(std::string dName)
{
	Inicializa(dName);
}

Departamento::Departamento()
{
}

Departamento::~Departamento()
{
}

void Departamento::Inicializa(std::string dName)
{
	setDepName(dName);
}

void Departamento::setDepName(std::string dName)
{
	depName = dName;
}

string Departamento::getDepName()
{
	return depName;
}

void Departamento::printDepName()
{
	cout << "Trabalha no departamento " << depName << endl;
}