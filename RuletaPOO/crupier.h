#ifndef CRUPIER_H
#define CRUPIER_H

#include "persona.h"
#include <string>
#include <iostream>


class Crupier: public Persona{

     public:

          Crupier(string DNI, string codigo, string nombre="", string apellidos="",
          string direccion="", string localidad="", string provincia="",
          string pais=""):Persona(DNI,nombre,apellidos,direccion,localidad,
          provincia,pais){codigo_=codigo;};

          string getCodigo(){return codigo_;};
          void setCodigo(string codigo){codigo_=codigo;};

     private:

          string codigo_;

};


#endif
