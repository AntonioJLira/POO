#include "sobrecarga.h"


Sobrecarga Sobrecarga::operator=(const Sobrecarga &s){

     a_ = s.a_;
     b_ = s.b_;
     c_ = s.c_;

     return *this;       // Devuelve puntero de sobrecarga

}

Sobrecarga Sobrecarga::operator+(const Sobrecarga &s){

     Sobrecarga tmp(1,1,1);

     tmp.a_ = a_ + s.a_;
     tmp.b_ = b_ + s.b_;
     tmp.c_ = c_ + s.c_;

     return tmp;         // Devuelve un objeto de tipo sobrecarga

}

Sobrecarga Sobrecarga::operator-(const Sobrecarga &s){

     Sobrecarga tmp(0,0,0);

     tmp.a_ = a_ - s.a_;
     tmp.b_ = b_ - s.b_;
     tmp.c_ = c_ - s.c_;

     return tmp;         // Devuelve un objeto de tipo sobrecarga

}

Sobrecarga operator+(int n, Sobrecarga s){

     s.a_ = n + s.a_;
     s.b_ = n + s.b_;
     s.c_ = n + s.c_;

     return s;

}


Sobrecarga Sobrecarga::operator++(int){      // Para incremento postfijo s++

     Sobrecarga tmp = *this;

     ++a_;
     ++b_;
     ++c_;

     return tmp;

}

Sobrecarga Sobrecarga::operator++(void){      // Para incremento prefijo ++s

     ++a_;
     ++b_;
     ++c_;

     return *this;

}

Sobrecarga Sobrecarga::operator--(int){      // Para incremento postfijo s--

     Sobrecarga tmp = *this;

     --a_;
     --b_;
     --c_;

     return tmp;

}

Sobrecarga Sobrecarga::operator--(void){      // Para incremento pretfijo --s

     --a_;
     --b_;
     --c_;

     return *this;

}

/*

std::istream & operator>>(std::istream &flujoEntrada, Pyme &p)
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
*/
