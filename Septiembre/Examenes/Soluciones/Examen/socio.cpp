#include<iostream>
#include<cstdlib>
#include<cstdio>
#include "socio.hpp"

using namespace std;
using namespace poo;
	Socio::Socio(string nombre,string apellidos, int edad,int donativo):Persona(nombre,apellidos,edad){
		_donativo=donativo;
		}
	Socio::Socio(const Socio &s){
			setNombre(s.getNombre());
			setApellidos(s.getApellidos());
			setEdad(s.getEdad());
			_donativo=s._donativo;
		}
	Socio & Socio::operator=(const Socio & s){
		setNombre(s.getNombre());
		setApellidos(s.getApellidos());
		setEdad(s.getEdad());
		_donativo=s._donativo;

		return *this;
		}
namespace poo{
	std::ostream & operator << (std::ostream & o,const Socio & s){
			o<<"Nombre<"<<s.getNombre()<<">\n Apellidos: <"<<s.getApellidos()<<"> \n Edad:<"<<s.getEdad()<<">\n donativo <"<< s.getDonativo()<<">\n";
			return o;
			}
	std::istream & operator>> (std::istream & i, Socio & s){
			string nombre, apellidos;
			int edad,donativo;
			cout << "Nombre: \n";
			i >> nombre;
			cout << "Apellidos: \n";
			i >> apellidos;
			cout << "Edad: \n";
			i >> edad;
			cout << "Donativo: \n";
			i >> donativo;
			s.setNombre(nombre);
			s.setApellidos(apellidos);
			s.setEdad(edad);
			s.setDonativo(donativo);
			return i;
			}
}
	void Socio::escribirSocio(){
		int donativo;
		donativo=Socio::getDonativo();
		Socio::escribirPersona();
		cout << "Donativo: " << donativo << "\n";
		}
	void Socio::leerSocio(){	
		int donativo;
		Socio::leerPersona();
		cout << "Introduzca el donativo que realiza la persona\n";
		cin >> donativo;
		Socio::setDonativo(donativo);
		
		}
		
