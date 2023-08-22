#include "principal.h"

Principal::Principal()
{
	//Inicializa as pessoas:
	simao.Inicializa(3, 10, 1976, "Jean Simão");
	newton.Inicializa(4, 1, 1643, "Isaac Newton");
	einstein.Inicializa(14, 3, 1879, "Albert Einstein");

	//Inicializa as universidades:
	UTFPR.Inicializa("UTFPR");
	cambridge.Inicializa("Cambridge");
	princeton.Inicializa("Princeton");

	//Inicializa os departamentos:
	TI.Inicializa("TI");
	math.Inicializa("Matematica");
	physics.Inicializa("Fisica");

	//Seta os afiliados:
	simao.setAfiliado(&UTFPR);
	newton.setAfiliado(&cambridge);
	einstein.setAfiliado(&princeton);

	//Seta os departamentos:
	simao.setDepAfil(&TI);
	newton.setDepAfil(&math);
	einstein.setDepAfil(&physics);



	//Estrutura para utilizar o time.h: 
	struct tm* local;
	time_t segundos;
	time(&segundos);
	local = localtime(&segundos);

	diaAt = local->tm_mday;
	mesAt = local->tm_mon + 1;
	anoAt = local->tm_year + 1900;

	Executar();
}

Principal::~Principal()
{
}

void Principal::Executar()
{

	simao.calcAge(diaAt, mesAt, anoAt);
	newton.calcAge(diaAt, mesAt, anoAt);
	einstein.calcAge(diaAt, mesAt, anoAt);

	simao.showDepAfil();
	newton.showDepAfil();
	einstein.showDepAfil();


}