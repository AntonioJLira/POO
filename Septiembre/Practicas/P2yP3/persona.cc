#include "persona.h"

using namespace std;

Persona::Persona(string DNI,string nombre, string apellidos, string direccion,
string localidad, string provincia, string pais){

     setDNI(DNI);
     setNombre(nombre);
     setApellidos(apellidos);
     setDireccion(direccion);
     setLocalidad(localidad);
     setProvincia(provincia);
     setPais(pais);

}

Persona::Persona(){

     DNI_ = "55XX";
     nombre_ = "Carlos";
     apellidos_ = "Perez";
     direccion_ = "Calle Perez";
     localidad_ = "Cordoba";
     provincia_ = "Cordoba";
     pais_ = "Espania";

}
