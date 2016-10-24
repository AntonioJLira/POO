#ifndef CRUPIER_H
#define CRUPIER_H


#include <string>
#include "persona.h"

class Crupier: public Persona{

     public:

          Crupier(string DNI,string codigo,string nombre="",string apellidos="", string direccion="", string localidad="",string provincia="",
          string pais="");

          string getCodigo(){return codigo_;};

          void setCodigo(string codigo){codigo_=codigo;};


     private:

          string codigo_;

};


#endif
