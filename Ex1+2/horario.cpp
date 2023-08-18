#include "horario.hpp"


Horario::Horario(uint8_t h, uint8_t m)
{
	if (!setHora(h) || !setMin(m))
	{
		exit(-1);
	}
}

Horario::Horario() :
	hora(0), min(0)
{
}

Horario::~Horario()
{
}


uint8_t Horario::getHora()
{
	return hora;
}
uint8_t Horario::getMin()
{
	return min;
}
bool Horario::setHora(uint8_t hora_at)
{
	if (hora_at <= MAX_HR && hora_at >= 0)
	{
		hora = hora_at;
		return true;
	}
	return false;

}
bool Horario::setMin(uint8_t min_at)
{
	if (min_at <= MAX_MIN && min_at >= 0)
	{
		min = min_at;
		return true;
	}
	return false;
	
}

uint8_t Horario::calculauint8_tervalo(Horario horario)
{
	uint8_t uint8_tervalo = (horario.getHora() - hora) * HORA_P_MIN + horario.getMin() - min;

	return uint8_tervalo > 0 ? uint8_tervalo : uint8_tervalo + MIN_POR_DIA;

}