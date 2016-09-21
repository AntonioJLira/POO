
/* 3.- Introducción a las clases (lee todo el enunciado del
ejercicio antes de empezar) En ProgramaciónOrientada a Objetos,
una clase es una plantilla extensible para la creación de
objetos con los datos que necesiten esos objetos y sus funciones
(métodos, operaciones) asociadas. En este ejercicio vamos a
codificar la clase Dados. */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "dados.h"


// Constructor de la clase Dados, contiene el cuerpo de las funciones

Dados::Dados() {

	srand(time(NULL));
	d1_ = 1;
	d2_ = 1;

}

void Dados::lanzamiento(){

	d1_ = (1 + rand() % 6);
	d2_ = (1 + rand() % 6);

}
bool Dados::setDado1(int i){

	if (i < 1 || i > 6){

		return false;

	}
	else {

		d1_ = i;
		return true;

	}

}
bool Dados::setDado2(int j){

	if (j < 1 || j > 6) {

		return false;
	}
	else {

		d2_ = j;
		return true;

	}

}
