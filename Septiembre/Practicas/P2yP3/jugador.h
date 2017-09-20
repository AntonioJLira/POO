#ifndef __JUGADOR_H__
#define __JUGADOR_H__

#include <string>
#include <fstream>
#include <list>
#include <cstdlib>
#include <iostream>

#include "persona.h"

using namespace std;

struct Apuesta{

     int tipo;
     string valor;
     int cantidad;

};


class Jugador : public Persona {

     private:

          int dinero_;
          string codigo_;
          list <Apuesta> apuestas_;

     public:

          // Constructor
          Jugador(string DNI, string codigo, string nombre="",
          string apellidos="", string direccion="", string localidad="",
          string provincia="", string pais="",int dinero=1000):Persona(DNI,
          nombre,apellidos,direccion,localidad,provincia,pais){

               codigo_ = codigo;
               dinero_ = dinero;

          };

          // Modificadores de dinero y codigo
          void setCodigo(string codigo){codigo_ = codigo;};
          void setDinero(int dinero){dinero_ = dinero;};

          // Observadores de dinero y codigo
          string getCodigo(){return codigo_;};
          int getDinero(){return dinero_;};

          // Observador de la lista de apuestas
          list <Apuesta> getApuestas(){return apuestas_;};

          // Modificador de la lista de apuestas
          void setApuestas();

};




#endif
