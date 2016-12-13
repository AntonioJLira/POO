#include <iostream>
#include "dados.h"

using namespace std;


int main(void) {


	Dados d;

	int n = 4;

	cout << "____________________________________\n\n" ;

	for(int i = 0; i <= n ; i++){

		d.lanzamiento();

			d.setDado1();
			cout << "Dado 1: " << d.getDado1() << "\n\n";
			d.setMedia1();


			d.setDado2();
			cout << "Dado 2: " << d.getDado2() << "\n\n";
			d.setMedia2();

		d.setUltimos(i);

		cout << "Suma: " << d.getSuma() << "\n\n" ;

		// cout << d.d1_;	// No se puede ya que estamos accediendo a una variable privada de
						// de la clase dados

		cout << "Diferencia: " <<  d.getDiferencia() << "\n";

		cout << "____________________________________\n\n" ;

		}

	cout << "Lanzamientos totales: " << d.getLanzamiento() << "\n\n";

	cout << "Lanzamientos dado 1: " << d.getLanzamiento1() << "\n\n";

	cout << "Lanzamientos dado 2: " << d.getLanzamiento2() << "\n\n";

	cout << "____________________________________\n\n" ;

	cout << "La media del dado 1 es: " << d.getMedia1() << "\n\n";

	cout << "La media del dado 2 es: " << d.getMedia2() << "\n\n";

	cout << "____________________________________\n\n" ;

	cout << "\nUltimos valores del dado 1: ";

	for (int i = 4; i >= 0 ; i--){

	cout << d.getUltimos1(i) << " ";

	}

	cout << "\n\n";

	cout << "\nUltimos valores del dado 2: ";

	for (int i = 4; i >= 0 ; i--){

		cout << d.getUltimos2(i) << " ";

	}

	cout << "\n\n____________________________________\n\n" ;

}
