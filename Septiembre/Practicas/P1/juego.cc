#include <iostream>
#include "dados.h"

int main(){

     Dados d;
     int i=0;

     d.lanzamiento();

     cout << "\nEl valor del dado 1 es: " << d.getDado1() << "\n";
     cout << "\nEl valor del dado 2 es: " << d.getDado2() << "\n";

     cout << "\nSuma del dado 1 y el dado 2 es: " << d.getSuma() << "\n";

     cout << "\nDiferencia entre el dado 1 y el dado 2 es: " << d.getDiferencia() << "\n";


     for(int i=0;i<=4;i++){

          d.lanzamiento();
          cout << "\nEl valor del dado 1 es: " << d.getDado1() << "\n";
          cout << "\nEl valor del dado 2 es: " << d.getDado2() << "\n";

               d.setUltimos(i);

     }

     cout << "\nEl valor de la media es: " << d.getMedia1() << "\n";
     cout << "\nEl valor de la media es: " << d.getMedia2() << "\n";

     cout << "\nLos ultimos 5 valores del vector 1: ";

     for (int i = 4; i >= 0 ; i--){

           cout << d.getUltimos1(i) << " ";

     }

     cout << "\n";

     cout << "\nLos ultimos valores del vector 2: ";

     for (int i = 4; i >= 0 ; i--){

          cout << d.getUltimos2(i) << " ";

     }

     cout << "\n\n";

     return 0;

}
