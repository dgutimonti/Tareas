#pragma once
class Juego
{
private:
	int piedra{ 1 };
	int papel{ 2 };
	int tijera{ 3 };
	int PuntajeJ1{};
	int PuntajeJ2{};
public:
	void jugar();

	//Getter
	int getPuntajeJ1() {
		return PuntajeJ1;
	}
	int getPuntajeJ2() {
		return PuntajeJ2;
	}
	//Setter

	void setPuntajeJ1(int puntaje) {
		PuntajeJ1 = puntaje;
	}
	void setPuntajeJ2(int puntaje) {
		PuntajeJ2 = puntaje;
	}

};

