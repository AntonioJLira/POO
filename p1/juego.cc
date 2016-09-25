#include <iostream>
#include "dados.h"

using namespace std;


int main(void) {


	Dados d;

	int n = 4;

	for(int i = 0; i <= n ; i++){

	d.lanzamiento();

	d.setDado1();
	cout << "_______________________________________________________________\n\n" ;

	cout << "El valor del dado 1 es: " << d.getDado1() << "\n\n";
	d.setMedia1();


	d.setDado2();
	cout << "El valor del dado 2 es: " << d.getDado2() << "\n\n";
	d.setMedia2();

	d.setUltimos(i);

	//cout << "La suma de los valores de los dados son: " << d.getSuma() << "\n\n" ;

	// cout << d.d1_;	// No se puede ya que estamos accediendo a una variable privada de
					// de la clase dados

	//cout << "La diferencia de los dos dados es: " <<  d.getDiferencia() << "\n\n";
}

	cout << "_______________________________________________________________\n\n" ;

	cout << "El numero de lanzamientos ha sido: " << d.getLanzamiento() << "\n\n";

	cout << "El numero de lanzamientos del dado 1 ha sido: " << d.getLanzamiento1() << "\n\n";

	cout << "El numero de lanzamientos del dado 2 ha sido: " << d.getLanzamiento2() << "\n\n";

	cout << "La media del dado 1 es: " << d.getMedia1() << "\n\n";

	cout << "La media del dado 2 es: " << d.getMedia2() << "\n\n";

	cout << "_______________________________________________________________\n\n" ;

	for (int i = n; i > 0 ; i--){

	cout << "Valor del vector de prueba: " << d.getUltimos1(i) << "\n\n";

	}

}
