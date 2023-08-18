#pragma once
#include "horario.hpp"
#include <iostream>

using namespace std;

class Principal
{
	private:
		Horario entrada;
		Horario saida;

	public:

		Principal();
		~Principal();

		void setHorarioEntrada(uint8_t h, uint8_t m);
		void setHorarioSaida(uint8_t h, uint8_t m);

		void setHorarios();

		double calculaCusto();

		void executar();

};