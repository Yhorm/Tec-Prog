#pragma once

#include <iostream>
using namespace std;

class Pessoa {
	private:
		int bDay;
		int bMonth;
		int bYear;
		int age;
		string pName;

	public:
		Pessoa(int dia, int mes, int ano, std::string nome);
		void calc_age(int dia, int mes, int ano);
		void getAge();
		void getName();
		void getBirthdate();
};

