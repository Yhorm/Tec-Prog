#pragma once

#include <iostream>
#include <cstdlib>

#define HORA_P_MIN 60
#define MIN_POR_DIA 1440
#define MAX_MIN 59
#define MAX_HR 23

using namespace std;

class Horario 
{
	private:
		uint8_t hora;
		uint8_t min;
	public:

		Horario(uint8_t h, uint8_t m);
		Horario();
		~Horario();

		uint8_t getHora();
		uint8_t getMin();
		bool setHora(uint8_t hora_at);
		bool setMin(uint8_t min_at);
		uint8_t calculauint8_tervalo(Horario horario);
};