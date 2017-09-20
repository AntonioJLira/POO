#include "persona.h"
#include "jugador.h"

using namespace std;

void Jugador::setApuestas(){


     // Borra de la lista las apuestas y lee del fichero unas
     // nuevas por lo tanto:

     // Declaramos variables auxiliares ya que necesita una declaracion
     // previa
     char tipo[10], valor[10], cantidad[10];

     // Declaramos una variable de tipo Apuestas, que será la
     // introducida en la lista
     Apuesta aux;

     // Limpiamos la lista
     apuestas_.clear();

     // Declaramos el nombre del fichero
     string fichero = getDNI() + ".txt";

     // Declaramos el puntero del fichero
     ifstream entrada(fichero.c_str());

          if(entrada.is_open()){

                    // Leemos del fichero y lo metemos en las variables
                    // auxiliares
                    while(entrada.getline(tipo,256,',')){
                         entrada.getline(valor,256,',');
                         entrada.getline(cantidad,256,'\n');

                         // Una vez leidos lo metemos en la estructura, ya
                         // convertidos para que finalmente acabe en la lista
                         aux.tipo = atoi(tipo);
                         aux.valor = valor;
                         aux.cantidad = atoi(cantidad);

                         // Volcamos toda la estructura a la posición de lista
                         apuestas_.push_back(aux);

                    }

               // Cerramos fichero al salir
               entrada.close();

          }else{

               cout << "\nNo se ha podido abrir el fichero\n";
               exit(-1);
          }


}
