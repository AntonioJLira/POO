// Fichero: test3.cpp
// Ficheros de cabecera
#include <iostream>
#include <string>
#include "ong.hpp"
// Espacio de nombres para la entrada y salida de datos
using namespace std;
using namespace poo;
int main(void)
{
int n;
Ong o1;
cout << "Número de socios --> ";
cin >> n;
o1.setVectorSocios(n);
cout << "Lectura de los datos de una Ong" << endl;
o1.leerOng();
cout << endl;
cout << "Escritura de los datos de una Ong" << endl;
o1.escribirOng();
cout << endl;
cout << "Comprobación del operador []" << endl;
n = o1.getNumeroSocios();
if (n > 0)
{
cout << "El último socio es --> " << endl;
o1[n-1].escribirSocio();
}
cout << endl;
//////////////////
Ong o2;
// Uso del operador de asignación =
o2 = o1;
cout << "Escritura de los datos de la nueva Ong 2" << endl;
o2.escribirOng();
cout << endl;
string nombreFichero;
cout << "Introduzca en nombre del fichero para grabar los datos de la ONG --> ";
cin >> nombreFichero;
o2.grabarEnFichero(nombreFichero);
cout << endl;
cout << "El test 3 ha finalizado correctamente" << endl << endl;
// Fin del programa
return 0;
}
