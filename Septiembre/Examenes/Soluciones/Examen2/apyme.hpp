#ifndef _APYME_H_
#define _APYME_H_

#include<iostream>
#include<string>

//Clase que representa el TAD “asociación de pequeñas y medianas empresas” y está compuesta por “pymes”
#include "pyme.hpp"
using namespace std;
namespace poo{

class Apyme{
	private:
		string _nombreApyme;
		Pyme * _vectorPymes;
		int _numeroPymes;
	public:
		Apyme();
		~Apyme();
		string getNombreApyme()const{return _nombreApyme;}
		Pyme * getVectorPymes()const{return _vectorPymes;}
		int getNumeroPymes()const{return _numeroPymes;}
		Pyme & getPyme(int indice);
		Pyme & operator[](int indice);
		void setNombreApyme(string nombreapyme){_nombreApyme=nombreapyme;}
		void setVectorPymes(int n=0,Pyme * v=NULL);
		void setNumeroPymes(int numeropymes){_numeroPymes=numeropymes;}
		Apyme & operator =(Apyme & a);
		void escribirApyme();
		void leerApyme();
		void grabarEnFichero(string nombrefichero);

};

}
#endif 
