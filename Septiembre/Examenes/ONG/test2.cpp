// Fichero: test2.cpp
// Ficheros de cabecera
#include <iostream>
#include <string>
#include "socio.hpp"
// Espacio de nombres para la entrada y salida de datos
using namespace std;
using namespace poo;
int main(void)
{
Socio s1;
cout << "Lectura de los datos de un socio" << endl;
s1.leerSocio();
cout << endl;
cout << "Escritura de los datos de un socio" << endl;
s1.escribirSocio();
cout << endl << endl;
// Uso del constructor de copia
Socio s2(s1);
// Uso del extractor e insertador
cout << " Datos del socio no 2" << endl;
cout << s2;
cout << endl << endl;
cout << "Modificación de los datos del socio no 2" << endl;
cin >> s2;
cout << endl;
cout << " Datos modificados del socio no 2" << endl;
cout << s2;
cout << endl << endl;cout << "El test 2 ha finalizado correctamente" << endl << endl;
// Fin del programa
return 0;
}
