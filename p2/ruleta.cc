#include "ruleta.h"


Ruleta::Ruleta(Crupier c):crupier_(c){

     bola_=-1;
     banca_=1000000;
     srand(time(NULL));

}

void Ruleta::setBanca(int banca){

     banca_=banca

}

bool Ruleta::setBanca(int banca){

     if(banca > -1){

          banca_=banca;
          return true;
     }else{
          return false;
     }

}

bool Ruleta::setBola(){

     if(bola => 0 || bola <= 36){

          bola_=bola;
          return true;

     }else{
          return false;
     }

}

bool Ruleta::addJugador(Jugador j){

     string nombre;
     fstream file;

     nombre = j.getDNI()+".txt";

     jugadores_.push_back(j);

     fstream file;

     file.open(nombre.c_str());

     if(file){

          std::cout << "\nFichero no modificado\n";
          file.close();
          return false;

     }else{

          file.close();
          file.open(nombre.c_str(),ios::in);
          return true;

     }


}

int Ruleta::deleteJugador(Jugador j){

     return deleteJugador(j.getDNI());

}

int Ruleta::deleteJugador(string DNI){

     list<Jugador>::iterator i;

     if(jugadores_.empty()) return -1;  // Lista vacia

     for(i=jugadores_.begin();i!=jugadores_.end();i++){
          if(i->getDNI()==DNI){
               jugadores_.erase(i);
               return 1;                // Se ha borrado con exito
          }
     }

     return -2;     // No se ha encontrado el jugador

}

void Ruleta::escribeJugadores(){

     ofstream.salida("jugadores.txt");
     list<Jugador>::iterator i;
     for(i=jugadores_.begin();i!=jugadores_.end();i++){

          salida << i-> getDNI() << "," << i->getCodigo() << "," << i->getNombre() << ","
         << i->getApellidos() << "," << i->getDireccion() << ","
         << i->getLocalidad() << "," << i->getProvincia() << ","
         << i->getPais() << "," << i->getDinero() << "\n";
     }
     salida.close();

}

void Ruleta::leeJugadores(){

     ifstream entrada("jugadores.txt");

     char DNI[50],codigo[50],nombre[50];
     char apellidos[50], direccion[50], localidad[50];
     char provincia[50], pais[50], dinero[50];

     jugadores_.clear();      // Borramos antes de leer fichero
     Jugador j("prueba","prueba");

     while(entrada.getline(DNI,256,',')){    // Mientras que la entrada posea
                                             // Posea un valor, valdrá true

          // Coge del fichero y guarda el valor hasta el delimitador
          // guardandolo en la variable
          // Ej codigo C123,...,...
          //    nombre ...,Carlos,...

          entrada.getline(codigo,256,',');
          entrada.getline(nombre,256,',');
          entrada.getline(apellidos,256,',');
          entrada.getline(direccion,256,',');
          entrada.getline(localidad,256,',');
          entrada.getline(provincia,256,',');
          entrada.getline(pais,256,',');
          entrada.getline(dinero,256,',');

          // Almacenamos las variables en el objeto

          j.setDNI(DNI);
          j.setCodigo(codigo);
          j.setNombre(nombre);
          j.setApellidos(apellidos);
          j.setDireccion(direccion);
          j.setLocalidad(localidad);
          j.setProvincia(provincia);
          j.setPais(pais);
          j.setDinero(dinero);

          // Metemos el objeto j de tipo Juego

          jugadores_.push_back(j);

     }

     entrada.close(); 

}

void Ruleta::giraRuleta(){

      setBola((rand() % 37));

}
