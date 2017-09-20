#ifndef __DADOS_H__
#define __DADOS_H__

#include <ctime>
#include <cstdlib>
#include <iostream>


using namespace std;

class Dados{

     private:

          int d1_, d2_, lanzamiento1_, lanzamiento2_;
          float media1_, media2_;
          int vectord1_[4], vectord2_[4];

     public:

          Dados();
          void lanzamiento();
          int getDado1(){return d1_;};
          int getDado2(){return d2_;};
          bool setDado1(int d1);
          bool setDado2(int d2);
          int getSuma(){return d1_+d2_;};
          int getDiferencia();
          int getLanzamientos1(){return lanzamiento1_;};
          int getLanzamientos2(){return lanzamiento2_;};
          void setMedia1();
          void setMedia2();
          float getMedia1();
          float getMedia2();
          void setUltimos(int i=0);
          int getUltimos1(int i=0);
          int getUltimos2(int i=0);


};

#endif
