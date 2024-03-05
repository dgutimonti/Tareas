#include "Juego.h"
#include <iostream>
void Juego::jugar()
{
	int eleccionJ1, eleccionJ2;
	std::string revancha;
	do{
	std::cout << "Recuerda digitar: \nPiedra = 1\nPapel = 2\nTijera = 3" << std::endl << std::endl;

	std::cout << "Jugador 1 introduce piedra, papel o tijera" << std::endl << std::endl;
	std::cin >> eleccionJ1;

	std::cout << "Jugador 2 introduce piedra, papel o tijera" << std::endl << std::endl;
	std::cin >> eleccionJ2;

	if (eleccionJ1 == eleccionJ2) {
		std::cout << "\n---Empate---" << std::endl;
	}
	else if ((eleccionJ1 == piedra && eleccionJ2 == tijera) ||
		(eleccionJ1 == papel && eleccionJ2 == piedra) ||
		(eleccionJ1 == tijera && eleccionJ2 == papel)) {
			std::cout << "\n---Jugador 1 gana---" << std::endl;
			setPuntajeJ1(getPuntajeJ1() + 100);
			}
	else {
		std::cout << "\n---Jugador 2 gana---" << std::endl;
		setPuntajeJ2(getPuntajeJ2() + 100);
	}
	std::cout << "\nPuntaje del Jugador 1: " << getPuntajeJ1() << std::endl;
	std::cout << "\nPuntaje del Jugador 2: " << getPuntajeJ2() << std::endl;

	std::cout << "\nQuieres jugar de nuevo? (y/n): ";
	std::cin >> revancha;

	} while (revancha == "y");
}
