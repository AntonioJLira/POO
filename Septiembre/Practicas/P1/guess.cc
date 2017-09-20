#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

     srand(time(NULL));

     int numero = 0, nAle = 1 + rand() % (11-1);

     cout << "\nIntroduzca un numero por teclado: ";
     cin >> numero;

     if(numero == nAle){

          cout << "El numero introducido por el usuario(" << numero << ") es igual al aleatorio (" << nAle << ")";
          return 0;

     }
     if(nAle < numero){

          cout << "El numero introducido por el usuario (" << numero << ") es mayor que el aleatorio (" << nAle << ")";
          return 0;

     }else{

          cout << "El numero introducido por el usuario(" << numero << ") es menor que el aleatorio (" << nAle << ")";
          return 0;

     }

}
