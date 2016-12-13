#ifndef RULETA_H
#define RULETA_H

#include "persona.h"
#include "crupier.h"
#include "jugador.h"

#include <string>
#include <cstdlib>
#include <list>

using namespace std;

class Ruleta {

     private:

          int banca_ , bola_;
          list <Jugador> jugadores_;
          Crupier crupier_;
          string color(int x);
          string parimpar(int x);
          string altobajo(int x);

     public:

          // Constructor de la clase Ruleta

          Ruleta(Crupier c):crupier_(c){banca_=1000000;bola_=-1;srand(time(NULL));};

          int getBanca(){return banca_;};    // Metodos getBanca y getBola
          int getBola(){return bola_;};

          bool setBanca(int banca);          // Modificadores de banca y bola
          bool setBola(int bola);

          Crupier getCrupier(){return crupier_;};      //Observador de crupier
          void setCrupier(Crupier c){crupier_=c;};     // Modficador de crupier

          list <Jugador> getJugadores(){return jugadores_;}; // Observadores de Jugador

          bool addJugador(Jugador j);
          int deleteJugador(Jugador j);
          int deleteJugador(string DNI);

          void escribeJugadores();
          void leeJugadores();
          void giraRuleta();
          void getPremios();


};

#endif
