#pragma once

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif


#include <iostream>
#include "pessoa.h"
#include "universidade.h"
#include "departamento.h"
#include <time.h>


using namespace std;


class Principal 
{
	private:
		Pessoa simao;
		Pessoa newton;
		Pessoa einstein;
		
		Universidade UTFPR;
		Universidade princeton;
		Universidade cambridge;

		Departamento TI;
		Departamento physics;
		Departamento math;


		int diaAt = 0;
		int mesAt = 0;
		int anoAt = 0;
	public:

		Principal();
		~Principal();
		void Executar();

};