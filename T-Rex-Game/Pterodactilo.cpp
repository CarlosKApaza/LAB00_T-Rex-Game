#include "Pterodactilo.h"

Pterodactilo :: Pterodactilo() {
	velocidad = 10;
}

void Pterodactilo :: volar() {
	std:: cout << "El Pterodactilo vuela a " << velocidad << " km/h" << std::endl;
}

void Pterodactilo::atakar(){
	std::cout << "El Pterodactilo ataca con sus garras al Dinosaurio" << std::endl;
}