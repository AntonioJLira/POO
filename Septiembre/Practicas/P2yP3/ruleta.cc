#include "persona.h"
#include "crupier.h"
#include "jugador.h"
#include "ruleta.h"

#include <string>
#include <fstream>
#include <list>
#include <ctime>

using namespace std;

bool Ruleta::setBanca(int banca){

     if(banca>0){
          banca_ = banca;
          return true;
     }else{
          return false;
     }
}
bool Ruleta::setBola(int bola){

     if(bola>=1 && bola<=36){
          bola_ = bola;
          return true;
     }else{
          return false;
     }
}

bool Ruleta::addJugador(Jugador j){

     // Caso para la lista

     list<Jugador>::iterator i;

     for(i=jugadores_.begin();i!=jugadores_.end();i++){

          if(i->getDNI()==j.getDNI()){

               return false;

          }
     }

     jugadores_.push_back(j);

     // Caso para el que fichero exista

     string fichero = (j.getDNI() + ".txt");
     ifstream input(fichero.c_str());

     // Si el puntero es "NULL" indica que el fichero no existe
     // por lo tanto lo creamos y lo dejamos vacio
     if(!input){
          ofstream(fichero.c_str());
     }

     input.close();
     return true;

}

int Ruleta::deleteJugador(Jugador j){

     return deleteJugador(j.getDNI());

}

int Ruleta::deleteJugador(string DNI){

     list<Jugador>::iterator i;

     if(jugadores_.empty()){
          return -1;
     }

     for(i=jugadores_.begin();i!=jugadores_.end();i++){

          if(i->getDNI()==DNI){
               jugadores_.erase(i);
               return 1;
          }
     }
     return -2;
}

void Ruleta::escribeJugadores(){

     list<Jugador>::iterator i;
     ofstream input("jugadores.txt");

     for(i=jugadores_.begin();i!=jugadores_.end();i++){

          input << i->getDNI() << "," << i->getCodigo() << ","
          << i->getNombre() << "," << i->getApellidos() << ","
          << i->getDireccion() << "," << i->getLocalidad() << ","
          << i->getProvincia() << "," << i->getPais() << ","
          << i->getDinero() << "\n";
     }

     input.close();

}

void Ruleta::leeJugadores(){

     ifstream lectura("jugadores.txt");
     char DNI[50],codigo[50],nombre[50],apellidos[50],direccion[50],
     localidad[50],provincia[50],pais[50],dinero[50];

     jugadores_.clear();
     Jugador j("prueba","prueba");


     while(lectura.getline(DNI,256,',')){
          // Leemos del fichero
          lectura.getline(codigo,256,',');
          lectura.getline(nombre,256,',');
          lectura.getline(apellidos,256,',');
          lectura.getline(direccion,256,',');
          lectura.getline(localidad,256,',');
          lectura.getline(provincia,256,',');
          lectura.getline(pais,256,',');
          lectura.getline(dinero,256,'\n');

          // Lo volcamos en las variables privadas
          j.setDNI(DNI);
          j.setCodigo(codigo);
          j.setNombre(nombre);
          j.setApellidos(apellidos);
          j.setDireccion(direccion);
          j.setLocalidad(localidad);
          j.setProvincia(provincia);
          j.setPais(pais);
          j.setDinero(atoi(dinero));

          // Lo volcamos en la lista
          jugadores_.push_back(j);
     }

     lectura.close();
}

void Ruleta::giraRuleta(){
     bola_ = rand()%37;
}

void Ruleta::getPremios(){

     list <Apuesta>::iterator iap;
	list <Jugador>::iterator ijug;
	list <Apuesta> aux;

	for(ijug=jugadores_.begin(); ijug!=jugadores_.end(); ijug++){
		//se cargan las apuestas del jugador ijug en la lista aux de apuestas
		ijug->setApuestas();
		aux=ijug->getApuestas();

		//se recorren estas apuestas y se tratan para hacer el reparto de ganancias/perdidas.
		for(iap=aux.begin(); iap!=aux.end();iap++)
			tratarApuestas(*ijug,*iap);
	}

}

void Ruleta::tratarApuestas(Jugador &j,Apuesta a){

	int opcion=a.tipo;

	switch (opcion){

		case 1: if(atoi(a.valor.c_str())==getBola()){//Si aciertas el numero ganas el 36.00 de lo que apuestas

			j.setDinero((j.getDinero()+(35*a.cantidad)));
			setBanca((getBanca()-35*a.cantidad));
		}
			else{ //y si pierdes pierdes lo apostado y lo gana la banca
				j.setDinero((j.getDinero()-a.cantidad));
				setBanca((getBanca()+a.cantidad));
			}
		break;

		case 2:	if(getBola()==0){ //si sale el cero lo pierdes todo lo que hayas apostado

			j.setDinero(j.getDinero()-a.cantidad);
			setBanca(getBanca()+a.cantidad);
		}
			else{ //pero si no sale y aciertas color ganas 2.0 de lo que apuestes
				if((a.valor=="negro" && ((getBola()%2 + ((getBola()/10)%2))%2)==1 )||(a.valor=="rojo"  && ((getBola()%2 + ((getBola()/10)%2))%2)==0)){

					j.setDinero(j.getDinero()+a.cantidad);
					setBanca(getBanca()-a.cantidad);
				}

				else{ //y si no aciertas color pierdes lo apostado

					j.setDinero(j.getDinero()-a.cantidad);
					setBanca(getBanca()+a.cantidad);
				}
			}
		break;

		case 3:	if(getBola()==0){//si la bola sale cero pierdes lo apostado

			j.setDinero(j.getDinero()-a.cantidad);
			setBanca(getBanca()+a.cantidad);
		}

				else{ //y si no sale cero y aciertas par/impar ganas 2.0 y la banca lo pierde
					if((a.valor=="par" && getBola()%2==0) || (a.valor =="impar" && getBola()%2==1)){

					j.setDinero(j.getDinero()+a.cantidad);
					setBanca(getBanca()-a.cantidad);
					}
					else{//y si no aciertas pierdes lo apostado

						j.setDinero(j.getDinero()-a.cantidad);
						setBanca(getBanca()+a.cantidad);
					}
				}
		break;


		case 4: if(getBola()==0){//si la bola sale 0 pierdes lo apostado

			j.setDinero(j.getDinero()-a.cantidad);
			setBanca(getBanca()+a.cantidad);
		}
		else{//y si no y aciertas si es bajo o alto ganas 2.0 de tus apuestas
			if((a.valor=="bajo" && (getBola()>=1 && getBola()<=18)) || ((a.valor=="alto" && (getBola()>=19 && getBola()<=36)))){

			j.setDinero(j.getDinero()+a.cantidad);
			setBanca(getBanca()-a.cantidad);

			}
			else{//pero si no aciertas pierdes lo apostado y lo gana la banca

				j.setDinero(j.getDinero()-a.cantidad);
				setBanca(getBanca()+a.cantidad);
			}
		}
	break;

	default: cout<< "Error en la apuesta";
	exit(-1);
	}
}
