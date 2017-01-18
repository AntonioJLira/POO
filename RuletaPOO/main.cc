#include <iostream>
#include "main.h"

/*
Para compilar
     g++  persona.cc persona.h jugador.cc jugador.h crupier.cc crupier.h ruleta.cc ruleta.h main.cc main.h -o roulette
*/

using namespace std;

int main(){

int opcion=0;

// Declaraciones de las variables

string DNI,nombre,codigo,codigoJ,apellidos,direccion,localidad,provincia,pais;
int dinero;

// Declaraciones de los objetos

Persona p(DNI, nombre, apellidos, direccion, localidad, provincia,pais);
Jugador j(DNI, codigoJ, nombre, apellidos, direccion, localidad, provincia, pais,dinero);
Crupier c(DNI, codigo, nombre, apellidos, direccion, localidad, provincia, pais);
Ruleta r(c);

cout << "\nElija una opción:\n";
cout << "1. Cargar los jugadores del fichero\n";
cout << "2. Guardar los jugadores en el fichero\n";
cout << "3. Ver el estado de la ruleta, el dinero de la banca y jugadores\n";
cout << "4. Jugar, premios de cada jugador y balance de la banca\n";
cout << "5. Eliminar a un jugador de la mesa\n";
cout << "6. Añadir a un jugador a la mesa\n";
cout << "7. Salir del programa\n";
cout << "\nOpcion elegida: ";
cin >> opcion;

switch (opcion) {
     case 1:
          cout << "\nHa elegido cargar los jugadores del fichero\n";
          cout << "El valor de la banca es: " << r.getBanca() << "Y el de la bola es: " << r.getBola() << "\n";
          break;
     case 2:
          cout << "\nHa elegido guardar los jugadores en el fichero\n";
          break;
     case 3:
          cout << "\nHa elegido ver el estado de la ruleta, dinero y jugadores\n";
          break;
     case 4:
          cout << "\nHa elegido jugar, ver los premios de cada jugador y el balance de la banca\n";
          break;
     case 5:
          cout << "\nHa elegido eliminar un jugador de la mesa \n";
          break;
     case 6:
          cout << "\nHa elegido añadir un jugador a la mesa \n";
          break;
     case 7:
          cout << "\nHa elegido salir del programa ... Adios );\n";
          break;
     default:
          cout << "Elección incorrecta, Saliendo :D";
          break;

}


return 0;

}
