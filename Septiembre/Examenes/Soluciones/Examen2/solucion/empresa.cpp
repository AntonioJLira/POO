#include "empresa.hpp"
#include <iostream>

using namespace std;
using namespace poo;

void Empresa::leerEmpresa()
{
  string nombre;
  string direccion;
  string CIF;

  	cout << "Nombre --> ";
  	//cin >> nombre;
	// para permitir espacios en blanco
	getline(cin,nombre);

 	cout << "Direccion --> ";
  	//cin >> direccion;
	// para permitir espacios en blanco
	getline(cin,direccion);

	cout << "CIF --> ";
	//cin >> CIF;
	// para permitir espacios en blanco
	getline(cin,CIF);

	// Se asignan los valores a los atributos de la clase Empresa
 	setNombre(nombre);
	setDireccion(direccion);
	setCIF(CIF);
}


void Empresa::escribirEmpresa()
{
	cout << "Nombre:  " << getNombre() << endl;
	cout << "Direccion:  " << getDireccion() << endl;
	cout << "CIF: " << getCIF() << endl;

}

