#ifndef __RULETA_H__
#define __RULETA_H__

#include <list>
#include <iostream>
#include "jugador.h"

using namespace std;

class Ruleta{

     private:

          int banca_, bola_;
          list<Jugador> jugadores_;
          Crupier crupier_;

          string color(int x);
          string parimpar(int x);
          string altobajo(int x);

     public:

          // Constructor de la clase Ruleta [VER MAS A FONDO]
          Ruleta(Crupier c):crupier_(c){
               banca_ = 1000000;
               bola_ = -1;
               srand(time(NULL));
          }

          // Observadores de banca_ y bola_
          int getBanca(){return banca_;};
          int getBola(){return bola_;};

          // Modificadores de banca_ y bola_
          bool setBanca(int banca);
          bool setBola(int bola);

          // Observador de Crupier
          Crupier getCrupier(){return crupier_;};

          // Modificador de crupier
          void setCrupier(Crupier crupier){crupier_ = crupier;};

          // Observador de Jugadores
          list<Jugador> getJugadores(){return jugadores_;};

          // Añadir jugador
          bool addJugador(Jugador j);

          // Elimina al jugador a traves de su DNI
          int deleteJugador(Jugador j);
          int deleteJugador(string DNI);

          // Añade los jugadores de la lista a jugadores.txt
          void escribeJugadores();

          // Lee lo datos de los jugadores y los mete en la lista
          void leeJugadores();

          // Simula el giro de la ruleta (obtención de un numero random)
          void giraRuleta();

          // Recorre la lista de jugadores y carga las apuestas de los
          // ficheros correspondientes
          void getPremios();

          void tratarApuestas(Jugador &j,Apuesta a);





};

#endif
