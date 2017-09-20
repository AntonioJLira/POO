// Fichero: test1.cpp

// Ficheros de cabecera
#include <iostream>
#include <string>

#include "empresa.hpp"

// Espacio de nombres para la entrada y salida de datos
using namespace std;

using namespace poo;

int main(void)
{

  Empresa e;

  cout << "Lectura de los datos de una empresa" << endl;
  e.leerEmpresa();
  cout << endl;

  cout << "Escritura de los datos de una empresa" << endl;
  e.escribirEmpresa();
  cout << endl;

  cout << endl;
  cout << "El test 1 ha finalizado correctamente" << endl << endl;

  // Fin del programa

  return 0;
}


