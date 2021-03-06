#ifndef _ONG_HPP_
#define _ONG_HPP_
#include <iostream>
#include <string>
#include "socio.hpp"

using namespace std;
namespace poo{

class Ong{
	private:
		string _nombreOng;
		Socio * _vectorSocios;
		int _numeroSocios;
	public:
		Ong();
		~Ong();
		string getNombreOng()const{return _nombreOng;}
		Socio * getVectorSocios()const{return _vectorSocios;}
		int getNumeroSocios()const{return _numeroSocios;}
		Socio & getSocio(int indice);
		Socio & operator[](int indice);
		void setNombreOng(string nombreong){_nombreOng=nombreong;}
		void setNumeroSocios(int numerosocios){_numeroSocios=numerosocios;}
		void setVectorSocios(int n=0,Socio * v=NULL);
		Ong & operator=(Ong & s);
		void escribirOng();
		void leerOng();
		void grabarEnFichero(string nombrefichero);
};
}

#endif


































































