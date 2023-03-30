#include "Jogo.h"



// const � usado para indicar que o par�metro
// titulo n�o pode ser alterado dentro do m�todo.



// O m�todo adquirir recebe o t�tulo e o pre�o de um jogo.
void Jogo::adquirir(const string& titulo, float valor)
{
	// O campo nome do jogo recebe o par�metro titulo.
	nome  = titulo;
	
	// O campo preco do jogo recebe o par�metro valor.
	preco =  valor;

	// O campo horas do jogo � incializado com valor 0.
	horas =      0;

	// O campo custo do jogo recebe o par�metro valor.
	custo =  valor;

}



// O m�todo atualizar atualiza o pre�o de um jogo.
void Jogo::atualizar(float valor)
{
	// O campo preco do jogo recebe o valor passado como par�metro
	preco = valor;
	
	// Invoca o m�todo privado calcular.
	calcular();
}




// O m�todo jogar atualiza o tempo de jogo.
void Jogo::jogar(int tempo)
{
	// O campo horas do jogo recebe o valor do campo horas
	horas = horas + tempo;

	// Invoca o m�todo privado calcular.
	calcular();
}




// O m�todo exibir exibe os dados do jogo.
void Jogo::exibir()
{
	cout << " Nome:   " << nome  << endl;
	cout << "Preco: R$" << preco << endl;
	cout << "Horas:   " << horas << endl;
	cout << "Custo: R$" << custo << endl;

}