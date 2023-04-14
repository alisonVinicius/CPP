#include "point.h"




void
Point::MoveTo(int px, int py)
{
	x = px;	// Move a coordenada x.
	y = py;	// Move a coordenada y.
}


void
Point::Translate(int dx, int dy)
{
	x += dx; // Translada a coordenada x.
	y += dy; // Translada a coordenada y.
}


