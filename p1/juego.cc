#include <iostream>
#include "dados.h"

using namespace std;


int main(void) {

	Dados d;

for(int i=0; i<5 ; i++){

	d.lanzamiento();

	d.setDado1();
	cout << "El valor del dado 1 es: " << d.getDado1() << "\n\n";
	d.setMedia1();

	d.setDado2();
	cout << "El valor del dado 2 es: " << d.getDado2() << "\n\n";
	//d.setMedia2();

	//cout << "La suma de los valores de los dados son: " << d.getSuma() << "\n\n" ;

	// cout << d.d1_;	// No se puede ya que estamos accediendo a una variable privada de
					// de la clase dados

	//cout << "La diferencia de los dos dados es: " <<  d.getDiferencia() << "\n\n";

}

	cout << "_______________________________________________________________\n\n" ;

	cout << "El numero de lanzamientos ha sido: " << d.getLanzamiento() << "\n\n";

	cout << "El numero de lanzamientos del dado 1 ha sido: " << d.getLanzamiento1() << "\n\n";

	cout << "El numero de lanzamientos del dado 2 ha sido: " << d.getLanzamiento2() << "\n\n";

	cout << "La media es: " << d.getMedia1();


	return 0;
}
