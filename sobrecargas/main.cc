#include <iostream>
#include "sobrecarga.h"

using namespace std;

int main (){

     int opcion=0;

     cout << "\nSobrecargas de operadores. Elija una opción: \n";
     cout << "1. Sobrecarga del operador de asignación (=)\n";
     cout << "2. Sobrecarga del operador suma/resta(+/-)\n";
     cout << "3. Sobrecarga del operador incremento/decremento(o++/o--)\n";
     cout << "4. Sobrecarga del operador incremento/decremento(++o/--o)\n";
     cout << "5. Sobrecarga del operador de asignación >>\n";
     cout << "6. Sobrecarga del operador de asignación <<\n";
     cout << "7. Sobrecarga de funciones friend \n";
     cout << "8. Información sobre los operadores\n";
     cout << "0. Salir\n";

     switch(opcion){

          case 1:

               break;

          case 2:

               break;

          case 3:

               break;

          case 4:

               break;

          case 5:

               break;

          case 6:

               break;

          case 7:

               break;
     }



/*
     Operadores

     Tipos:
     cout << "+ - * / % ^ & | ~ ! , = < > <= >= ++ -- << >> == != && || \n
     += -= *= /= %= ^= &= |= <<= >>= [] () -> ->* new delete";

     Declaración:
     tipo operator operador(argumentos) → int operator+(int numero,obj objeto);

     Operadores no sobrecargables:
     :: (resolución de ámbito)
     . (seleccion de miembro)
     .* (seleccion de un miembro referenciado por un puntero)
     ?: (operador condicional)
     sizeof (tamaño de)
     typeid (identificación de tipos)

*/

     return 0;
}
