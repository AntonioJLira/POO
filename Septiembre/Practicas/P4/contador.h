#ifndef CONTADOR_H
#define CONTADOR_H
#include <list>

using namespace std;

class Contador{
     private:

          int minimo_, maximo_,  inicial_;
          list<int>contador_ ;

     public:

          // Constructor con 3 parametros

          Contador(int minimo=0 , int maximo=1000, int inicial=0);

          // Método get

          int get(){return inicial_;};

          // Operador de asignacion con dos variantes, una que reciba un entero

          void operator=(int num);

          // ... y otra a la cual se le pasa un objeto y lo asigne a otro

          void operator=(const Contador &c);

          // Operadores de incremento y decremento

          // Para incremento postfijo n++
          Contador operator++(int);

          // Para incremento prefijo ++n
          Contador operator++(void);

          // Operadores de decremento

          // Decremento postfijo
          Contador operator--(int);

          // Decremento pretfijo
          Contador operator--(void);

          //18:23

          // Operador +
          friend Contador operator+(Contador c, int n);     // Para 10 + n
          friend Contador operator+(int n, Contador c);     // Para n + 10
          friend Contador operator-(Contador c, int n);     // Para 10 - n
          friend Contador operator-(int n, Contador c);     // Para n - 10


          // Metodo undo
          bool undo(int n=1);

};

#endif
