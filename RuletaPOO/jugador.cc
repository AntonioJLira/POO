#include "jugador.h"

using namespace std;

Jugador::Jugador(string DNI, string codigoJ, string nombre, string apellidos,
string direccion, string localidad, string provincia, string pais, int dinero):Persona(
DNI, nombre, apellidos, direccion, localidad, provincia, pais){

     codigoJ_=codigoJ;
     dinero_=dinero;


}

void Jugador::setApuestas(){
	string nombre, linea, cadena;
	size_t tamanio,desde;
	Apuesta aux;

	nombre=getDNI()+".txt";
	fstream fichero(nombre.c_str());

	while(getline(fichero,linea,'\n')){

          // Para saber el valor de la variable tipo

		desde=0;
		tamanio=linea.find(",");
		cadena=linea.substr(desde, tamanio);
		aux.tipo=atoi(cadena.c_str());

          // Para saber el valor de la variable valor

		desde=tamanio+1;
		tamanio=linea.find(",",desde);
		cadena=linea.substr(desde,(tamanio-desde));
		aux.valor=cadena;

          // Para saber el valor de la variable cantidad

		desde=tamanio+1;
		tamanio=linea.find(",",desde);
		cadena=linea.substr(desde,tamanio);
		aux.cantidad=atoi(cadena.c_str());

          // Almacenamos la estructura cargada en la lista

		apuestas_.push_back(aux);

		}

}
