#include <iostream>
#include "dados.h"

using namespace std;


int main(void) {

	Dados d;
	
	d.lanzamiento(); 
	d.setDado1();
	cout << "El valor del dado 1 es: " << d.getDado1() << "\n\n";

	d.setDado2(); 
	cout << "El valor del dado 2 es: " << d.getDado2() << "\n\n"; 

	cout << "La suma de los dados de los valores de los dados son: " << d.getSuma() << "\n\n" ; 


	return 0;
}