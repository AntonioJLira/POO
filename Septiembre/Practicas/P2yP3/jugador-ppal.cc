#include <iostream>
#include <string>

#include "persona.h"
#include "jugador.h"

using namespace std;

int main(){

     // Variable para el contador de la lista
     int k=0;
     // Variables para la recogida de datos
     string DNI, codigo, nombre, apellidos, direccion, localidad, provincia, pais;
     // Lista auxiliar para volcar los datos del fichero
     list<Apuesta> aux;

     // Recgida de datos
     cout << "\nDNI: ";
     cin >> DNI;
     cout << "\nCodigo: ";
     cin >> codigo;
     cout << "\nNombre: ";
     cin >> nombre;
     cout << "\nApellidos: ";
     cin >> apellidos;
     cout << "\nDireccion: ";
     cin >> direccion;
     cout << "\nLocalidad: ";
     cin >> localidad;
     cout << "\nProvincia: ";
     cin >> provincia;
     cout << "\nPais: ";
     cin >> pais;

     // Declaración del objeto
     Jugador j(DNI,codigo,nombre,apellidos,direccion,localidad,provincia,pais);

     // Limpiamos la lista y volcamos del fichero correspondiente
     j.setApuestas();

     // La devolvemos a la lista auxiliar
     aux = j.getApuestas();

     // Iterador de la lista
     list<Apuesta>::iterator i;

     cout << "\nLas apuestas de " << j.getNombre() << " " << j.getApellidos() << ":\n";

     for(i=aux.begin();i!=aux.end();i++){

          cout << "Apuesta "<< k <<" " << i->tipo << "," << i->valor << "," << i->cantidad << "\n";
          k++;

     }

     return 0;

}
