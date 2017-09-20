// Fichero: test2.cpp

// Ficheros de cabecera
#include <iostream>
#include <string>

#include "pyme.hpp"

// Espacio de nombres para la entrada y salida de datos
using namespace std;

using namespace poo;

int main(void)
{

  Pyme p1;

  cout << "Lectura de los datos de una pyme" << endl;
  p1.leerPyme();
  cout << endl;

  cout << "Escritura de los datos de una pyme" << endl;
  p1.escribirPyme();
  cout << endl << endl;

  // Uso del constructor de copia
  Pyme p2(p1);

  // Uso del extractor e insertador 
  cout << " Datos de la pyme nº 2" << endl;
  cout << p2;
  cout << endl << endl;
	
  cout << "Modificación de los datos de la pyme nº 2 utilizando el flujo de entrada" << endl;
  cin >> p2;
  cout << endl;

  cout << " Datos modificados de la pyme nº 2" << endl;
  cout << p2;
  cout << endl << endl;

  // Uso del operador sobrecargado de asignación "="
  cout << "Uso del operador sobrecargado de asignación \"=\"" << endl;
  Pyme p3;
  
  p3 = p1;
  
  cout << "Escritura de los datos de la pyme p3" << endl;
  p3.escribirPyme();
  cout << endl << endl;

    cout << "El test 2 ha finalizado correctamente" << endl << endl;

  // Fin del programa

  return 0;
}


