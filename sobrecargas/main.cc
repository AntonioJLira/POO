#include <iostream>
#include "sobrecarga.h"

using namespace std;

int main (){

     int opcion=1;

     Sobrecarga A(1,2,4), B(7,8,9), C(5,3,7);

     while(opcion){

     cout << "\nSobrecargas de operadores.\n\n";
     cout << "1. Sobrecarga del operador de asignación (=)\n";
     cout << "2. Sobrecarga del operador suma/resta(+/-)\n";
     cout << "3. Sobrecarga del operador incremento/decremento(o++/o--)\n";
     cout << "4. Sobrecarga del operador incremento/decremento(++o/--o)\n";
     cout << "5. Sobrecarga del operador de flujo >>\n";
     cout << "6. Sobrecarga del operador de flujo <<\n";
     cout << "7. Sobrecarga de funciones friend \n";
     cout << "8. Información sobre los operadores\n";
     cout << "9. Información sobre los objetos\n";
     cout << "0. Salir\n";
     cout << "\nElija una opcion: ";
     cin >> opcion;


     switch(opcion){

          case 0:
               cout << "\nEnga, talué\n";
               break;

          case 1:
               cout << "\nLos valores antes del operador de asignación\n";
               cout << "\nValor de A: " << A.getA() << "\n";
               cout << "Valor de B: " << A.getB() << "\n";
               cout << "Valor de C: " << A.getC() << "\n";
               A = B ;
               cout << "\nLos valores después del operador de asignación\n";
               cout << "\nValor de A: " << A.getA() << "\n";
               cout << "Valor de B: " << A.getB() << "\n";
               cout << "Valor de C: " << A.getC() << "\n";
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

          case 8:

               break;

          case 9:

               cout << "\nLos valores iniciales de los objetos son: \n";
               cout << "Valor para el objeto A → " << "(" << A.getA() << ","<< A.getB() << "," << A.getC() << ")\n";
               cout << "Valor para el objeto B → " << "(" << B.getA() << ","<< B.getB() << "," << B.getC() << ")\n";
               cout << "Valor para el objeto C → " << "(" << C.getA() << ","<< C.getB() << "," << C.getC() << ")\n";

               break;
     }

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

/*

     Puntero this →


*/

     return 0;
}
