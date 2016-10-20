
/* La clase Persona gestiona el DNI, nombre, apellidos, dirección, localidad, provincia y país
de una persona (todos datos de tipo string). */

#include <iostream>
#include <string>
#include "persona.h"


using namespace std;


Persona::Persona(string DNI, string nombre, string apellidos, string direccion,
string localidad, string provincia, string pais){

    DNI_=DNI;
    nombre_ = nombre;
    apellidos_ = apellidos;
    direccion_ = direccion;
    localidad_ = localidad;
    provincia_ = provincia;
    pais_ = pais;

}

Persona::Persona(){

    DNI_="44XX";
    nombre_ = "Carlos";
    apellidos_ = "Gutierrez";
    direccion_ = "C/ Mesa 1";
    localidad_ = "Aguilar";
    provincia_ = "Sevilla";
    pais_ = "España";

}
