#include "dados.h"


Dados::Dados(){

     srand(time(NULL));
     d1_ = 1;
     d2_ = 1;
     lanzamiento1_ = 0;
     lanzamiento2_ = 0;
     media1_ = 0;
     media2_ = 0;

}

void Dados::lanzamiento(){

     setDado1(1+rand()%(7-1));
     setDado2(1+rand()%(7-1));

}

bool Dados::setDado1(int d1){

     if(d1>=1 && d1<=6){
          d1_ = d1;
          lanzamiento1_++;
          setMedia1();
          return true;
     }
          return false;

}

bool Dados::setDado2(int d2){

     if(d2>=1 && d2<=6){
          d2_ = d2;
          lanzamiento2_++;
          setMedia2();
          return true;
     }
          return false;

}

int Dados::getDiferencia(){

     if(d1_ > d2_){
          return d1_ - d2_;
     }else{
          return d2_ - d1_;
     }

     if(d1_ == d2_){
          return 0;
     }

}

void Dados::setMedia1(){
     media1_ += d1_;
}

void Dados::setMedia2(){
     media2_ += d2_;
}

float Dados::getMedia1(){

     if(getLanzamientos1()==0){
          return 0;
     }else{
          return (media1_/getLanzamientos1());
     }
}

float Dados::getMedia2(){
     if(getLanzamientos2()==0){
          return 0;
     }else{
          return (media2_/getLanzamientos2());
     }
}
void Dados::setUltimos(int i){

	vectord1_[i] = d1_;
	vectord2_[i] = d2_;

}

int Dados::getUltimos1(int i){

	return vectord1_[i];

}
int Dados::getUltimos2(int i){

	return vectord2_[i];

}
