
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
	media1_= 0;
	media2_= 0;

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
void Dados::setMedia1(){

	media1_ += d1_;

}

void Dados::setMedia2(){

	media2_ += d2_;

}

void Dados::setUltimos(int i){

	vectord1_[i] = d1_;
	vectord2_[i] = d2_;

}

int Dados::getUltimos1(int i){

	return vectord1_[i];

}
int Dados::getUltimos2(int i){

	return vectord2_[i];

}

float Dados::getMedia1(){

        if (getLanzamiento1()==0){

                return 0;

        }
        else{

               return media1_/getLanzamiento1();

        }
}

float Dados::getMedia2(){

        if (getLanzamiento2()==0){

                return 0;

        }
        else{

               return media2_/getLanzamiento2();

        }
}
