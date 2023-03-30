// pragma once serve para evitar que
//o compilador inclua o arquivo mais
//de uma vez no mesmo programa.
#pragma once

#include <string>     // necess�rio para usar string
#include <iostream>   // necess�rio para usar cout
#include <iomanip>    // necess�rio para usar setprecision


using namespace std;  // usando namespace std � uma declara��o
					  // de que todos os nomes do namespace std
					  // est�o dispon�veis para uso.

using std::string;   // usando std::string � uma declara��o
					 // de que o nome string est� dispon�vel
					 // para uso.


using std::setprecision;   // usando std::setprecision � uma declara��o
						   // de que o nome setprecision est� dispon�vel
						   // para uso.


class Jogo    // declara��o da classe Jogo
{

// private � um modificador de acesso
// que indica que os membros declarados
// a seguir s� podem ser acessados
// por fun��es da pr�pria classe.
private:
	string  nome;   // declara��o de um campo nome do tipo string
	float  preco;   // declara��o de um campo preco do tipo float
	int    horas;   // declara��o de um campo horas do tipo int
	float  custo;   // declara��o de um campo custo do tipo float

	
	
	void calcular()   // declara��o do m�todo privado calcular
	{
		// Se o valor do campo horas
		//� maior do que zero, ent�o
		if (horas > 0)
		{
			// O campo custo do jogo
			// recebe o valor do campo 
			// preco dividido pelo 
			// valor do campo horas.
			custo = preco / horas;
		}
	}


// public � um modificador de acesso
// que indica que os membros declarados
// a seguir podem ser acessados
// por fun��es de outras classes.
public: 


	// O m�todo adquirir recebe o t�tulo e o pre�o de um jogo.
	void adquirir(const string& titulo, float valor);
	
	// O m�todo atualizar atualiza o pre�o de um jogo.
	void atualizar(float valor);

	// O m�todo jogar atualiza o tempo de jogo.
	void jogar(int tempo);

	// O exibir exibe os dados do jogo.
	void exibir();
};

