#pragma once

#include <iostream>
using namespace std;


class Universidade
{
	private:
		string uName;
	public:
		Universidade(std::string nome);
		Universidade();
		~Universidade();

		void Inicializa(std::string nome);
		string getName();
		void printName();
};