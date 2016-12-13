#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
#include <list>
#include "persona.h"

using namespace std;

struct Apuesta{

     int tipo;
     string valor;
     int cantidad;

};


class Jugador: public Persona{

          public:

               Jugador(string DNI, string codigoJ, string nombre="", string apellidos="",
               string direccion="", string localidad="", string provincia="", string pais="",
               int dinero=1000);

               void setCodigo(string codigoJ){codigoJ_=codigoJ;};
               void setDinero(int dinero){dinero_=dinero;};
               void setApuestas();


               string getCodigo(){return codigoJ_;};
               int getDinero(){return dinero_;};
               list <Apuesta> getApuestas(){return apuestas_;};


          private:

               int dinero_;
               string codigoJ_;
               list <Apuesta> apuestas_;


};


#endif
