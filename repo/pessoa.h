#pragma once
#include <iostream>
using namespace std;
#include "universidade.h"


class Pessoa {
	private:
		int bDay;
		int bMonth;
		int bYear;
		int age;
		string pName;

		Universidade* uniFiliado;

	public:
		Pessoa(int dia, int mes, int ano, std::string nome = "");
		Pessoa();
		~Pessoa();
		void Inicializa(int dia, int mes, int ano, std::string nome);
		void calc_age(int dia, int mes, int ano);
		void printAge();
		int getAge();
		void printName();
		string getName();
		void printBirthdate();
		int getBirthdate()
};

