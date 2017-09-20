#ifndef __CRUPIER_H__
#define __CRUPIER_H__

#include "persona.h"
#include <iostream>
#include <string>


class Crupier : public Persona{

     private:

          string codigo_;

     public:

          // Constructor de la clase Crupier
          //      | Parametros obligatorios |       
          Crupier(string DNI, string codigo, string nombre="",
          string apellidos="", string direccion="", string localidad="",
          string provincia="", string pais=""):Persona(DNI,nombre,
          apellidos,direccion,localidad,provincia,pais){codigo_=codigo;};

          // Observador del codigo

          string getCodigo(){return codigo_;};

          // Modificar del codigo

          void setCodigo(string codigo){codigo_=codigo;};

};

#endif
