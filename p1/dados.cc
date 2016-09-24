
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
using namespace std;


// Constructor de la clase Dados, contiene el cuerpo de las funciones

Dados::Dados() {

	srand(time(NULL));
	d1_ = 1;
	d2_ = 1;
	lanzamiento_= 0;
	media_= 0;

}

void Dados::lanzamiento(){

	d1_ = (1 + rand() % 6);
	lanzamiento_++;
	d2_ = (1 + rand() % 6);
	lanzamiento_++;


}
bool Dados::setDado1(int i){

	if (i < 1 || i > 6){

		return false;

	}
	else {

		d1_ = i;
		lanzamiento_++;
		return true;

	}

}
bool Dados::setDado2(int j){

	if (j < 1 || j > 6) {

		return false;
	}
	else {

		d2_ = j;
		lanzamiento_++;
		return true;

	}
}
int Dados::setMedia1(){

	media_ += getDado1();
	return media_;

}
