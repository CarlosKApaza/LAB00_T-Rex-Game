#include <iostream>
#include "Dino.h"
#include "Terreno.h"
#include "Pterodactilo.h"
#include "Cactus.h"

int main() {
	std:: cout << "\t- - - EL JUEGO DEL DINOSAURIO T-REX GAME - - -\n" << std::endl;

	//Creacion de un objeto de la clase Dino usando puntero
	Dino *dino = new Dino();
	Terreno *terreno = new Terreno();
	Pterodactilo *pterodactilo = new Pterodactilo();
	Cactus *cactus = new Cactus();



	//Llamada a los metodos de la clase Dino usando el puntero al objeto creado 
	dino->correr();
	terreno->movimientoDeTerreno();	
	pterodactilo->volar();
	pterodactilo->atakar();
	cactus->moverCactus();




	return 0;
}