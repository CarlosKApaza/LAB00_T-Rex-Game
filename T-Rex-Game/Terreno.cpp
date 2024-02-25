#include "Terreno.h"

Terreno::Terreno() {
	posicionX = 0;
	alto = 10;
	ancho;

}

void Terreno::aparecerTerreno() {
	std::cout << "El terreno aparecio " << std::endl;
}

void Terreno::movimientoDeTerreno() {
	std::cout << "El terreno esta en movimiento " << std::endl;
}

void Terreno::desaparecerTerreno() {
	std::cout << "El terreno desaparecio " << std::endl;
}