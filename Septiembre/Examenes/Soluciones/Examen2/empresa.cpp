#include<iostream>
#include<string>
#include"empresa.hpp"
using namespace std;
using namespace poo;

	Empresa::Empresa(string nombre,string direccion, string CIF){
		_nombre=nombre;
		_direccion=direccion;
		_CIF=CIF;
		}
	Empresa::Empresa(Empresa const & e){
		setNombre(e.getNombre());
		setDireccion(e.getDireccion());
		setCIF(e.getCIF());
		}
	void Empresa::leerEmpresa(){
		string nombre,direccion,CIF;
		cout << "Nombre de la empresa: ";
		cin >> nombre;
		cout << "Direccion de la empresa: ";
		cin >> direccion;
		cout << "CIF de la empresa: ";
		cin >> CIF;
		setNombre(nombre);
		setDireccion(direccion);
		setCIF(CIF);
		}
	void Empresa::escribirEmpresa(){
		string nombre,direccion,CIF;
		nombre=getNombre();
		direccion=getDireccion();
		CIF=getCIF();
		cout<< "Nombre de la empresa: "<< nombre << "\n";
		cout << "Direccion de la empresa: " << direccion << endl;
		cout << "CIF de la empresa: " << CIF << endl;
		}
