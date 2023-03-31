#include "Coord.h"

Coord::Coord(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Coord::Translate(int dx, int dy)
{
	x += dx;
	y += dy;
}

void Coord::MoveTo(int px, int py)
{
	x = px;
	y = py;
}

Coord::~Coord()
{
	// Imprime uma mensagem que o objeto foi destruído.
	cout << "Objeto deletado" << endl;
}
