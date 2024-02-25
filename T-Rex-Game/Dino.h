#pragma once
#include <iostream>

class Dino
{
public:
	int vida;
	int velocidad;
public:
	Dino();

	void saltar();
	void correr();
	void agacharse();
	void morir();
};

