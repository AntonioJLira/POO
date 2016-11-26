#include "ruleta.h"


Ruleta::Ruleta(Crupier c):crupier_(c){

     bola_=-1;
     banca_=1000000;
     srand(time(NULL));

}

bool Ruleta::setBanca(int banca){

     if(banca > -1){

          banca_=banca;
          return true;
     }else{
          return false;
     }

}

bool Ruleta::setBola(int bola){

     if((bola >= 0) or (bola <= 36)){

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

     ofstream salida("jugadores.txt");
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
          j.setDinero(atoi(dinero));

          // Metemos el objeto j de tipo Juego

          jugadores_.push_back(j);

     }

     entrada.close(); 

}

void Ruleta::giraRuleta(){

      setBola((rand() % 37));

}

void Ruleta::getPremios(){

	list<Jugador>::iterator j;
	list<Apuesta>::iterator a;
	list<Apuesta> la;

	for (j = jugadores_.begin(); j != jugadores_.end(); j++) {
		j->setApuestas();
		la = j->getApuestas();
		for (a = la.begin(); a != la.end(); a++) {
			switch (a->tipo) {
			case 1: {
				if (atoi(a->valor.c_str()) == bola_) {
					j->setDinero(j->getDinero() + (a->cantidad * 35));
					banca_ -= a->cantidad * 35;
				}
				else {
					j->setDinero(j->getDinero() - a->cantidad);
					banca_ += a->cantidad;
				}
				break;
			}
			case 2: {
				if (bola_ != 0 && a->valor == color(bola_)) {
					j->setDinero(j->getDinero() + a->cantidad);
					banca_ -= a->cantidad;
				}
				else {
					j->setDinero(j->getDinero() - a->cantidad);
					banca_ += a->cantidad;
				}
				break;
			}
			case 3: {
				if (bola_ != 0 && a->valor == parimpar(bola_)) {
					j->setDinero(j->getDinero() + a->cantidad);
					banca_ -= a->cantidad;
				}
				else {
					j->setDinero(j->getDinero() - a->cantidad);
					banca_ += a->cantidad;
				}
				break;
			}
			case 4: {
				if (bola_ != 0 && a->valor == altobajo(bola_)) {
					j->setDinero(j->getDinero() + a->cantidad);
					banca_ -= a->cantidad;
				}
				else {
					j->setDinero(j->getDinero() - a->cantidad);
					banca_ += a->cantidad;
				}
				break;
			}
			}
		}
	}
}

string Ruleta::color(int x)
{
	switch (x) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
	case 12:
	case 14:
	case 16:
	case 18:
	case 19:
	case 21:
	case 23:
	case 25:
	case 27:
	case 30:
	case 32:
	case 34:
	case 36:
		return "rojo";
	default:
		return "negro";
	}
}

string Ruleta::parimpar(int x)
{
	if (x % 2 == 0) return "par";
	return "impar";
}

string Ruleta::altobajo(int x)
{
	if (x>18) return "alto";
	return "bajo";
}