#include "persona.h"

Persona::Persona(string nombre, string apellidos, int edad){

    setNombre(nombre);
    setApellidos(apellidos);
    setEdad(edad);

}

Persona::Persona(Persona p){

  Persona p1;
  p1 = p;

}
