// pragma once serve para evitar que
//o compilador inclua o arquivo mais
//de uma vez no mesmo programa.
#pragma once

#include <string>     // necessário para usar string
#include <iostream>   // necessário para usar cout
#include <iomanip>    // necessário para usar setprecision


using namespace std;  // usando namespace std é uma declaração
					  // de que todos os nomes do namespace std
					  // estão disponíveis para uso.

using std::string;   // usando std::string é uma declaração
					 // de que o nome string está disponível
					 // para uso.


using std::setprecision;   // usando std::setprecision é uma declaração
						   // de que o nome setprecision está disponível
						   // para uso.


class Jogo    // declaração da classe Jogo
{

// private é um modificador de acesso
// que indica que os membros declarados
// a seguir só podem ser acessados
// por funções da própria classe.
private:
	string  nome;   // declaração de um campo nome do tipo string
	float  preco;   // declaração de um campo preco do tipo float
	int    horas;   // declaração de um campo horas do tipo int
	float  custo;   // declaração de um campo custo do tipo float

	
	
	void calcular()   // declaração do método privado calcular
	{
		// Se o valor do campo horas
		//é maior do que zero, então
		if (horas > 0)
		{
			// O campo custo do jogo
			// recebe o valor do campo 
			// preco dividido pelo 
			// valor do campo horas.
			custo = preco / horas;
		}
	}


// public é um modificador de acesso
// que indica que os membros declarados
// a seguir podem ser acessados
// por funções de outras classes.
public: 


	// O método adquirir recebe o título e o preço de um jogo.
	void adquirir(const string& titulo, float valor);
	
	// O método atualizar atualiza o preço de um jogo.
	void atualizar(float valor);

	// O método jogar atualiza o tempo de jogo.
	void jogar(int tempo);

	// O exibir exibe os dados do jogo.
	void exibir();
};

