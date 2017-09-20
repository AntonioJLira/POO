#include<iostream>
#include<string>
#include "pyme.hpp"

using namespace std;
using namespace poo;

	Pyme::Pyme(string propietario,string nombre,string direccion,string CIF):Empresa(nombre,direccion,CIF){
		_propietario=propietario;
		}

	Pyme::Pyme(Pyme const & p){
		setNombre(p.getNombre());
		setDireccion(p.getDireccion());
		setCIF(p.getCIF());
		setPropietario(p.getPropietario());
		}

	Pyme & Pyme::operator=(Pyme const & p){
		setNombre(p.getNombre());
		setDireccion(p.getDireccion());
		setCIF(p.getCIF());
		setPropietario(p.getPropietario());
		return * this;
		}

	void Pyme::leerPyme(){
		string propietario;
		leerEmpresa();
		cout<< "Nombre del propietario de la empresa: ";
		cin >> propietario;
		setPropietario(propietario);
		}
	
	void Pyme::escribirPyme(){
		string propietario;
		propietario=getPropietario();
		cout << "Nombre del propietario de la empresa: " << propietario << endl;
		escribirEmpresa();
		}

namespace poo{

	std::ostream & operator << (std::ostream & o,Pyme const & p){
		o<< "Propietario: "<< p.getPropietario() << "\n" << "Nombre de la empresa: " << p.getNombre() << "\n" << "Direccion: " << p.getDireccion() << "\n" << "CIF: " << p.getCIF() << endl;
		return o; 
		}
	std::istream & operator >>(std::istream & i,Pyme & p){
		string nombre,propietario,direccion,CIF;
		cout<< "Nombre de la empresa: ";
		cin >> nombre;
		cout<< "Direccion de la empresa: ";
		cin >> direccion;
		cout<< "CIF de la empresa: ";
		cin >> CIF;
		cout<<"Propietario de la empresa: ";
		cin >> propietario;
		p.setNombre(nombre);
		p.setDireccion(direccion);
		p.setCIF(CIF);
		p.setPropietario(propietario); 
		return i;
		}


}






























