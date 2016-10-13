#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona(){

        public:

            Persona(DNI); // Constructor

            // Modficadores → setters()

            string setDNI();
            string setNombre();
            string setApellidos();
            string setDireccion();
            string setLocalidad();
            string setProvincia();
            string setPais();

            // Observadores → getters()

            string getDNI();
            string getNombre();
            string getApellidos();
            string getDireccion();
            string getLocalidad();
            string getProvincia();
            string getPais();

            string getApellidosyNombre();

        private:

            string DNI_ , nombre_ , apellidos_ , direccion_ , localidad_ ,
            provincia_ , pais_ ;





};


#endif
