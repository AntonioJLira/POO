#ifndef _EMPRESA_HPP_
#define _EMPRESA_HPP_

#include<string>
using namespace std;
namespace poo{

class Empresa{
	private:
		string _nombre;
		string _direccion;
		string _CIF;
	public:
		Empresa(string nombre="",string direccion="",string CIF="");
		Empresa(Empresa const & e);
		string getNombre()const{return _nombre;}
		string getDireccion()const{return _direccion;}
		string getCIF()const{return _CIF;}
		void setNombre(string nombre){_nombre=nombre;}
		void setDireccion(string direccion){_direccion=direccion;}
		void setCIF(string CIF){_CIF=CIF;}
		void leerEmpresa();
		void escribirEmpresa();

};


}

#endif
