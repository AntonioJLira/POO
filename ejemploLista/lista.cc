#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <cstdlib>

using namespace std; 

struct Apuesta{

     int codigo; 
     string valor; 
     int cantidad; 

};

int main (){


     // Primeramente creamos la lista que manejará el fichero

     list <Apuesta> Apu;
     
     // Variable que leerá el fichero linea a linea 
     
     string linea, cadena;
     size_t tamanio, inicio; 
     Apuesta aux; 
     
     // Creamos el fichero que manejara la lista
     
     string nombre = "33XX.txt";        // Le pasamos el nombre a una cadena 
     fstream fichero;                   // Declaramos el punto para trabajar con él,
                                        // lo dejamos como input y output a la vez
     fichero.open(nombre.c_str());              // Abrimos el fichero 
     
     // Comprobamos que se ha abierto el fichero correctamente 
     
     if(!fichero){
          
          cout << "\nNo se ha podido abrir el fichero \n"; 
          
     }else{
     
          cout << "\nEl fichero se ha abierto correctamente\n";
          
     }
    
     
     // Cargamos en la lista los datos
     
     while(getline(fichero,linea,'\n')){
     
          inicio=0;     // Basicamente lo que se hace aqui es que por cada linea 
                        // se saca el codigo de la apuesta, el valor y la canitdad
                        // lo hace o declarando el comienzo de la linea (inicio),
                        // busca la primera coma que separa un campo del otro, 
                        // la instruccion find() devuelve la posicion de la 
                        // primera aparicion, en nuestro caso de la coma.
                        // De la cadena general saca una subcadena desde inicio 
                        // hasta la posicion de la coma 
                        // Para sacar el resto de valores vasta con modificar el 
                        // inicio y ponerlo a tamaño + 1,  por lo tanto nos 
                        // quedaremos en el primer caracter despues de la coma 
                        // cogiendo cada palabra de manera separada.
                        
                        
                        
               tamanio=linea.find(",");
               
               cadena = linea.substr(inicio,tamanio);
               
               aux.codigo = atoi(cadena.c_str());
               
          inicio = tamanio + 1; 
          
               tamanio = linea.find(",");
               
               cadena = linea.substr(inicio,(tamanio-inicio));
               
               aux.valor = cadena;
               
         inicio = tamanio + 1; 
         
               tamanio = linea.find(",");
               
               cadena = linea.substr(inicio,tamanio);
               
               aux.cantidad = atoi(cadena.c_str());
               

          Apu.push_back(aux);
     
     }     
          

     fichero.close();                   // Cerramos el fichero 

     // Mostramos todos los elementos de la lista, para ello declaramos un
     // iterador 
     
     list<Apuesta>::iterator pos;           
     
     /*   → Necesita de la sobrecarga del operador <<

     for(pos=Apu.begin();pos!=Apu.end();pos++) cout << *pos << " ";
     cout << endl; 
     
     */

     return 0; 


}







