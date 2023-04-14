#pragma once



// Classe point
class Point
{
private:
	int x;		// Coordenada x.
	int y;		// Coordenada y.

public:

	// Move as coordenadas, x e y,
	// de acordo com os valores
	// de px e py.
	void MoveTo(int px, int py);

	// Translada as coordenadas, x e y,
	// de acordo com os valores de dx e dy.
	void Translate(int dx, int dy);

	
	int GetX();
	int GetY();

};

// Os métodos GetX e GetY são
// métodos de acesso. Como
// possuem a implementação
// dentro da classe, são
// chamados de métodos inline.
inline int Point::GetX() { return x; }	// Retorna o valor da coordenada x.
inline int Point::GetY() { return y; }	// Retorna o valor da coordenada y.

