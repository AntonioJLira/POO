#ifndef __PERSONA_H__
#define __PERSONA_H__

#include <string>


class Persona {

     private:

          string nombre_, apellidos_;
          int edad_;

     public:

          Persona(string nombre="", string apellidos="", int edad=18);
          Persona(const Persona &p); 


};


#endif
