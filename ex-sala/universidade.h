#pragma once
#include <iostream>

#include "departamento.h"

using namespace std;


class Universidade
{
private:
	string uName;

	Departamento* depAfil;

public:
	Universidade(std::string nome);
	Universidade();
	~Universidade();

	void Inicializa(std::string nome = "");
	void setName(std::string nome = "");
	string getUniName();
	void printUniName();

	void setDep(Departamento* dep);
};