#ifndef CRUPIER_H
#define CRUPIER_H


#include <string>
#include "persona.h"

class Crupier: public Persona{

     public:

     Crupier(string DNI, string codigo, string nombre="", string apellidos="", string direccion="", string localidad="", string provincia="", string pais="");

     Crupier(const Crupier &c);

     string getCodigo(){return codigo_;};
     void setCodigo(string codigo){this->codigo_=codigo;};

     private:

     string codigo_;

};


#endif
