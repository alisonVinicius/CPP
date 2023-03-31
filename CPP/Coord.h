
// pragma once é uma diretiva de 
// pré-processamento que garante 
// que o arquivo seja incluído 
// apenas uma vez no código fonte. 
// Se o arquivo já foi incluído,
// o compilador ignora a diretiva 
//e não inclui o arquivo novamente.
//Isso é útil para evitar que o 
//compilador inclua o mesmo arquivo
//duas vezes, o que pode causar 
//erros de compilação.
#pragma once

// Inclui a biblioteca iostream.
#include <iostream>


// using namespace é uma diretiva de pré-processamento que
// permite que o compilador use os nomes de objetos e funções
// de um namespace sem ter que especificar o namespace.
using namespace std;

// Declara a classe Coord.
class Coord   
{

// Modificador de acesso private.
private:		
	int x;   // Declara a variável x.
	int y;   // Declara a variável y.


// Modificador de acesso public.
public:

	// Cria um construtor.
	Coord(int x = 0, int y = 0);

	// Declara o método Translate.
	void Translate(int dx, int dy);

	// Declara o método MoveTo.
	void MoveTo(int px, int py);

	 // declara método get e set para x.
	int getX() const { return x;}
	void setX(int x) { this->x = x; }

	// declara método get e set para y.
	int getY() const{return y; }
	void setY(int y){this->y = y;}


	// Cria um destrutor.
	~Coord();

};

