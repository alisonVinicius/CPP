#include "Jogo.h"



// const é usado para indicar que o parâmetro
// titulo não pode ser alterado dentro do método.



// O método adquirir recebe o título e o preço de um jogo.
void Jogo::adquirir(const string& titulo, float valor)
{
	// O campo nome do jogo recebe o parâmetro titulo.
	nome  = titulo;
	
	// O campo preco do jogo recebe o parâmetro valor.
	preco =  valor;

	// O campo horas do jogo é incializado com valor 0.
	horas =      0;

	// O campo custo do jogo recebe o parâmetro valor.
	custo =  valor;

}



// O método atualizar atualiza o preço de um jogo.
void Jogo::atualizar(float valor)
{
	// O campo preco do jogo recebe o valor passado como parâmetro
	preco = valor;
	
	// Invoca o método privado calcular.
	calcular();
}




// O método jogar atualiza o tempo de jogo.
void Jogo::jogar(int tempo)
{
	// O campo horas do jogo recebe o valor do campo horas
	horas = horas + tempo;

	// Invoca o método privado calcular.
	calcular();
}




// O método exibir exibe os dados do jogo.
void Jogo::exibir()
{
	cout << " Nome:   " << nome  << endl;
	cout << "Preco: R$" << preco << endl;
	cout << "Horas:   " << horas << endl;
	cout << "Custo: R$" << custo << endl;

}