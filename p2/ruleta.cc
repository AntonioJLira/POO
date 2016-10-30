#include "ruleta.h"

Ruleta::Ruleta(Crupier crupier){

     bola_=-1;
     banca_=1000000;
     srand(time(NULL));

}

bool Ruleta::setBola(int bola){

     bola = rand()%37;

     if( bola_ < 0 && bola_ > 36 ){

          bola_ = bola;
          return true

     }else{

          return false

     }

}
bool Ruleta::setBanca(int banca){

     if (banca_ < 0){

          return false;

     }else{

          banca_ = banca;
          return true;

}
