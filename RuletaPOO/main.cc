#include <iostream>
#include "main.h"

/*
Para compilar
     g++  persona.cc persona.h jugador.cc jugador.h crupier.cc crupier.h ruleta.cc ruleta.h main.cc main.h -o roulette
*/

using namespace std;

int main(){

int opcion=0;

// Declaraciones de los objetos

Persona p(string DNI,string nombre,string apellidos, string direccion, string localidad,string provincia, string pais);
Jugador j(string DNI, string codigoJ, string nombre, string apellidos,string direccion, string localidad, string provincia, string pais,int dinero);
Crupier c(string DNI, string codigo, string nombre, string apellidos,string direccion, string localidad, string provincia, string pais);
Ruleta r(Crupier c);


cout << "\nElija una opción:\n";
cout << "1. Cargar los jugadores del fichero\n";
cout << "2. Guardar los jugadores en el fichero\n";
cout << "3. Ver el estado de la ruleta, el dinero de la banca y jugadores\n";
cout << "4. Jugar, premios de cada jugador y balance de la banca\n";
cout << "5. Eliminar a un jugador de la mesa\n";
cout << "6. Añadir a un jugador a la mesa\n";
cout << "7. Salir del programa";
cout << "Opcion elegida: ";
cin >> opcion;
cout << "\n";

switch (opcion) {
     case 1:
          cout << "\nHa elegido cargar los jugadores del fichero\n";
          r.getBanca();
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
