#include "pyme.hpp"
#include <iostream>

using namespace std;
using namespace poo;

void Pyme::leerPyme()
{
  string propietario;
	
	leerEmpresa();
	
	cout << "Propietario --> ";
	// cin >> propietario;
	// para permitir espacios en blanco
	getline(cin,propietario);


	setPropietario(propietario);
}

void Pyme::escribirPyme()
{
	escribirEmpresa();

	cout << "Propietario: " << getPropietario() << endl;
}


namespace poo{

std::istream & operator>>(std::istream & flujoEntrada, Pyme &p)
{
  string nombre;
  string direccion;
  string CIF;
  string propietario;

  	cout << "Nombre --> ";
  	//flujoEntrada >> nombre;
	// para permitir espacios en blanco
	getline(flujoEntrada,nombre);

 	cout << "Direccion --> ";
  	//flujoEntrada >> direccion;
	// para permitir espacios en blanco
	getline(flujoEntrada,direccion);

	cout << "CIF --> ";
	//flujoEntrada >> CIF;
	// para permitir espacios en blanco
	getline(flujoEntrada,CIF);

	cout << "Propietario --> ";
	//flujoEntrada >> propietario;
	// para permitir espacios en blanco
	getline(flujoEntrada,propietario);

	// Se asignan a los atributos de la clase Empresa
 	p.setNombre(nombre);
	p.setDireccion(direccion);
	p.setCIF(CIF);

	// Se asigna el valor del atributo propio de Pyme
	p.setPropietario(propietario);

	return flujoEntrada;
}


std::ostream & operator<<(std::ostream & flujoSalida, Pyme const &p)
{
	flujoSalida << "Nombre: " << p.getNombre() << endl;
	flujoSalida << "Direccion: " << p.getDireccion() << endl;
	flujoSalida << "CIF: " << p.getCIF() << endl;

	flujoSalida << "Propietario: " << p.getPropietario() << endl;

	return flujoSalida;
}

} // Fin del espacio de nombres poo

