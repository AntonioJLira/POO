/* 2.- Hacer un programa (guess.cc) que genere un número
aleatorio entre 1 y 10, y solicite al usuario un número
por teclado para posteriormente adivinarlo indicando al
usuario si el número generado es menor, mayor o es correcto.
Usar para la entrada por teclado el objeto de entrada estandar
cin para lo que tendrás que incluir la misma cabecera que con
cout del ejercicioanterior. */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;


int main()
{

	int numero = 0, random = 0;

	srand(time(NULL)); // Generamos la semilla para los numeros aleatorios

		// Le pedimos al usuario el numero

		cout << "\n Introduzca un numero: ";
		cin >> numero;
		cout << "\n";

		// Generamos el numero aleatorio

		random = (1 + rand() % 10);
		cout << "\n El numero aleatorio es: " << random << "\n";

		// Comparamos ambos numero

		if (numero > random) {
			cout << "\n El numero elegido por el usuario es mayor que el generado. \n\n";
		}

		if (numero < random) {
			cout << "\n El numero elegido por el usuario es menor que el generado. \n\n";
		}
		if (numero == random) {
			cout << "\n El numero elegido es igual que el generado. \n\n";
		}

	return 0;

}
