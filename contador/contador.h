#ifndef CONTADOR_H
#define CONTADOR_H

class Contador{

public:

     // Constructores para 0-3 parametros

     Contador();
     Contador(int minimo);
     Contador(int minimo, int maximo);
     Contador(int minimo, int maximo, int inicial);

     // Sobrecarga de operador =

     Contador operator=(int contador);             // Para asignacion de enteros
     Contador operator=(const Contador &c);        // Para asignacion de objetos

     // Sobrecarga del operador ++

     Contador operator++(int);


     // Observador y modificador del contador

     void setContador(int contador){contador_=contador;};
     int get(){return contador_;};



private:

     int contador_, maximo_, minimo_, inicial_;


};

#endif
