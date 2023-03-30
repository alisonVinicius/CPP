#include "Jogo.h"



using namespace std;



int main()
{	
	// Declaração de um objeto do tipo Jogo.
	Jogo gow;

	// Invoca o método adquirir do objeto gow.
	gow.adquirir("God of War", 100.50);

	// Invoca o método exibir do objeto gow.
	gow.exibir();

	// Invoca o método jogar.
	gow.jogar(5);

	// Invoca o método exibir do objeto gow.
	gow.exibir();

	// Invoca o método atualizar.
	gow.atualizar(120.00);

	// Invoca o método exibir do objeto gow.
	gow.exibir();




	return 0; 
}
