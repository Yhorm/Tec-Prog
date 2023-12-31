#pragma once
#include <iostream>
#include "universidade.h"

using namespace std;


class Pessoa {
private:
	int bDay;
	int bMonth;
	int bYear;
	int age;
	string pName;

	Universidade* uniFiliado;
	Departamento* uniDepAfil;

public:
	Pessoa(int dia, int mes, int ano, std::string nome = "");
	Pessoa();
	~Pessoa();
	void Inicializa(int dia, int mes, int ano, std::string nome = "");

	void calcAge(int dia, int mes, int ano);
	void printAge();
	int getAge();

	void printName();
	string getName();

	void printBirthdate();
	int getBirthdate();

	void setAfiliado(Universidade* pu);
	void showAfiliacao();

	void setDepAfil(Departamento* dep);
	void showDepAfil();
};
