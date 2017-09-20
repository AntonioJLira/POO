#ifndef _SOCIO_HPP_
#define _SOCIO_HPP_


#include<iostream>
#include<string>
#include"persona.hpp"

using namespace std;
namespace poo{
//Clase que representa a las organizaciones no gubernamentales
class Socio:public Persona{

	private:
		int _donativo;
	public:
		Socio(string nombre="",string apelldos="",int edad=0,int donativo=0);
		void setDonativo(int donativo){_donativo=donativo;}
		int getDonativo() const{return _donativo;}
		Socio(Socio const & s);
		Socio & operator=(const Socio & s);
		friend std::istream & operator>>(std::istream &i, Socio &s);
		friend std::ostream & operator << (std::ostream &o,const Socio &a);
		void leerSocio();
		void escribirSocio();

	};
}
#endif
