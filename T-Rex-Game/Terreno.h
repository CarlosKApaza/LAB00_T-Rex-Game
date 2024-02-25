#pragma once
#include <iostream>
class Terreno
{
private: 
	int posicionX;
	int alto;
	int ancho;
public:

	Terreno();
	void movimientoDeTerreno();
	void aparecerTerreno();
	void desaparecerTerreno();
};

