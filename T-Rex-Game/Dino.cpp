#include "Dino.h"

Dino::Dino() {
	vida = 100;
	velocidad = 0;
}

void Dino::correr()
{
	std:: cout << "El Dinousaurio esta corriendo sobre el terreno" << std::endl;
}

void Dino::saltar()
{
	std:: cout  << "El Dinosaurio esta saltando los obstaculos" << std::endl;
}

void Dino::agacharse()
{
	std:: cout  << "El Dinosaurio esta aganchandose para esquivar al Pterodactilo" << std::endl;
}

void Dino::morir(){
	std:: cout  << "El Dinosaurio ah muerto por lo que termina el juego" << std::endl;
}
