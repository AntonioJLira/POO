// Fichero: test3.cpp

// Ficheros de cabecera
#include <iostream>
#include <string>

#include "apyme.hpp"

// Espacio de nombres para la entrada y salida de datos
using namespace std;

using namespace poo;

int main(void)
{
  int n;

  Apyme a1;
  
  cout << "Lectura de los datos de una Apyme" << endl;
  a1.leerApyme();
  cout << endl;

  cout << "Escritura de los datos de una Apyme" << endl;
  a1.escribirApyme();
  cout << endl;

  cout << "Comprobación del operador []" << endl;
  n = a1.getNumeroPymes();

  if (n > 0)
   {
     cout << "El último pyme es --> " << endl; 
     a1[n-1].escribirPyme();
   }
  
  cout << endl;

   //////////////////
   
   Apyme a2;

  // Uso del operador de asignación =
   a2 = a1;

  cout << "Escritura de los datos de la nueva Apyme 2" << endl;
  a2.escribirApyme();
  cout << endl;

  string nombreFichero;

  cout << "Introduzca en nombre del fichero para grabar los datos de la Apyme --> ";
  cin >> nombreFichero;

  a2.grabarEnFichero(nombreFichero);

  cout << endl;
  cout << "El test 3 ha finalizado correctamente" << endl << endl;

  // Fin del programa

  return 0;
}


