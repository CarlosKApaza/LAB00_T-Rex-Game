#pragma once
#include <iostream>

class Cactus
{
private: 
	int posicionX;
	int posicionY;
	int tamaño;
	int multitudCactus;
public: 
	Cactus();

	void generarCactus();
	void moverCactus();
};

