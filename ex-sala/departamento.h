#pragma once
#include <iostream>
using namespace std;


class Departamento 
{
	private: 
		string depName;

	public:
		
		Departamento(std::string dName);
		Departamento();
		~Departamento();
		
		void Inicializa(std:: string dName = "");
		void setDepName(std::string dName = "");
		string getDepName();
		void printDepName();


};