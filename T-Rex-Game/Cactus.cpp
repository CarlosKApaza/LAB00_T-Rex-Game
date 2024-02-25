#include "Cactus.h"

Cactus::Cactus()
{
	posicionX = 0;
	posicionY = 0;
	tamaño = 3;
	multitudCactus = 1;
}

void Cactus::generarCactus() {
	std:: cout << "Cactus generado" << std::endl;
}

void Cactus::moverCactus() {
	std::cout << "Los Cactus se van moviendo en el terreno" << std::endl;
}