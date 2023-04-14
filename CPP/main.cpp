/************************************************************** 						   
 * Author : Alison Vinicius
 * File:   main.cpp
 * 
 * Este projeto foi desenvolvido para a aprendizagem de C++
 * e também para a Programação Orientada a Objetos.
***************************************************************/

#include <iostream>
#include "point.h"


using namespace std;



int main()
{	
	// Cria ponto p.			
	Point p;

	// O operador sizeof retorna o tamanho
	// que o objeto p ocupa na memória.
	// Mais especificamente, o tamanho em
	// bytes.
	cout << sizeof(p) << endl;


	// Move o ponto p para (10, 20).
	p.MoveTo(10, 20);

	// Imprime as coordenadas do ponto p.
	cout << "(" << p.GetX() << ", " << p.GetY() << ")" << endl;

	// Translada o ponto p para (5, 10).
	p.Translate(5, 10);
	
	// Imprime as coordenadas do ponto p.
	cout << "(" << p.GetX() << ", " << p.GetY() << ")" << endl;

	return 0; 
}
