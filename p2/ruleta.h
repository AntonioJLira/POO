#include <iostream>
#include "jugador.h"
#include "crupier.h"
#include <ctime>
#include <list>



class Ruleta{


public:


     Ruleta(Crupier crupier);

     bool setBola(int bola);
     void setBanca(int banca);
     void setCrupier(Crupier)

     int getBola(){return bola_;};
     int getBanca(){return banca_;};
     Crupier getCrupier(){return crupier_;};



private:

     int bola_;
     int banca_;
     Crupier crupier_;
     list <Jugador> jugador_;


};
