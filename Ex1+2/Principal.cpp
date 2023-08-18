#include "Principal.hpp"




Principal::Principal()
{

}

Principal::~Principal()
{
}

void Principal::setHorarioEntrada(uint8_t h, uint8_t m)
{
	if (!entrada.setHora(h) || !entrada.setMin(m))
	{
		exit(-1);
	}
}

void Principal::setHorarioSaida(uint8_t h, uint8_t m)
{
	if (!saida.setHora(h) || !saida.setMin(m))
	{
		exit(-1);
	}
}

void Principal::setHorarios()
{
	int hora, min;

	cout << "Digite o horário de entrada: ";
	cin >> hora >> min;

	setHorarioEntrada(hora, min);

	cout << "Digite o horário de saída: ";
	cin >> hora >> min;

	setHorarioSaida(hora, min);
}

double Principal::calculaCusto()
{
	double custo = 0;
	uint8_t uint8_tervalo = entrada.calculauint8_tervalo(saida);
	if (uint8_tervalo < 3 * HORA_P_MIN)
	{
		custo = 4.5;
	} 
	else if(uint8_tervalo >= 3 * HORA_P_MIN &&uint8_tervalo <= 12 * HORA_P_MIN) 
	{
		custo = 4.5 + ((uint8_tervalo - HORA_P_MIN * 3) / 15) * 0.75;
	}
	else
	{
		custo = 33.0;
	}
	
	return custo;
}

void Principal::executar()
{
	setHorarios();

	cout << "O custo foi: " << calculaCusto() << endl;

}