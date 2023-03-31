
// pragma once � uma diretiva de 
// pr�-processamento que garante 
// que o arquivo seja inclu�do 
// apenas uma vez no c�digo fonte. 
// Se o arquivo j� foi inclu�do,
// o compilador ignora a diretiva 
//e n�o inclui o arquivo novamente.
//Isso � �til para evitar que o 
//compilador inclua o mesmo arquivo
//duas vezes, o que pode causar 
//erros de compila��o.
#pragma once

// Inclui a biblioteca iostream.
#include <iostream>


// using namespace � uma diretiva de pr�-processamento que
// permite que o compilador use os nomes de objetos e fun��es
// de um namespace sem ter que especificar o namespace.
using namespace std;

// Declara a classe Coord.
class Coord   
{

// Modificador de acesso private.
private:		
	int x;   // Declara a vari�vel x.
	int y;   // Declara a vari�vel y.


// Modificador de acesso public.
public:

	// Cria um construtor.
	Coord(int x = 0, int y = 0);

	// Declara o m�todo Translate.
	void Translate(int dx, int dy);

	// Declara o m�todo MoveTo.
	void MoveTo(int px, int py);

	 // declara m�todo get e set para x.
	int getX() const { return x;}
	void setX(int x) { this->x = x; }

	// declara m�todo get e set para y.
	int getY() const{return y; }
	void setY(int y){this->y = y;}


	// Cria um destrutor.
	~Coord();

};

