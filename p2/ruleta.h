#ifndef RULETA_H
#define RULETA_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <list>

#include "jugador.h"
#include "crupier.h"
#include "persona.h"





class Ruleta{


public:


     Ruleta(Crupier c);

     int getBanca(){return banca_;};
     int getBola(){return bola_;};
     Crupier getCrupier(){return crupier_;};
     list <Jugador> getJugadores(){return jugadores_;};

     bool setBanca(int banca);
     bool setBola(int bola);
     void setCrupier(Crupier c){crupier_=c;};

     bool addJugador(Jugador j);
     int deleteJugador(Jugador j);
     int deleteJugador(string DNI);

     void escribeJugadores();
     void leeJugadores();

     void giraRuleta(); 
	 void getPremios(); 


private:

     int bola_;
     int banca_;
     list <Jugador> jugadores_;
     Crupier crupier_;

};


 #endif
