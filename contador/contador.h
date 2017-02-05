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

     // Operador de suma (+) y resta (-)

     friend Contador operator+(Contador c, int n);     // Para c+10
     friend Contador operator+(int n, Contador c);     // Para 10+c
     friend Contador operator-(Contador c, int n);     // Para c-10
     friend Contador operator-(int n, Contador c);     // Para 10-c

     /*

     Utiliza funciones friend, las cuales no siendo función miembro
     de la clase pueden acceder a su parte privada.

           · Es necesaria la declaración de la clase.

           · Se pone friend solo dentro de la declaración de la clase

           · El acceso a los datos privados se hace a través de los
           objetos  que recibe la función y el operador punto.

           · La amistad es concedida, no tomada; para que una función
           pueda acceder a la parte privada de la clase, esa debe
           concederle privilegio declarándola función amiga.

           · Se podian haber declarado funciones public que accedan al
           color y luego compararlo, pero provoca llamadas adicionales,
           y la función de comparación estaría fuera de las clases y no
           dentro como debe de ser.

     Sobrecarga con funciones friend (suponemos que tenemos un contador
     que solo admite notificaciones con el operador ++ y --).

     Las funciones friend al no ser miembros, no reciben el puntero this

     */

     // Método undo , que deshace las últimas n operaciones del contador

     bool undo(int n=1);

};

#endif
