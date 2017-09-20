#ifndef __PERSONA_H__
#define __PERSONA_H__

#include <iostream>
#include <string>

using namespace std;

class Persona{

public:

  Persona(string nombre="Carlos", string apellidos="Perez", int edad=20);
  Persona(const Persona &p);

  string getNombre(){return nombre_;};
  string getApellidos(){return apellidos_;};
  int getEdad(){return edad_;};

  void setNombre(int nombre){nombre_ = nombre;};
  void setApellidos(int apellidos){apellidos_ = apellidos;};
  void setEdad(int edad){edad_ = edad;};

private:

  string nombre_, apellidos_;
  int edad_;

};

#endif
