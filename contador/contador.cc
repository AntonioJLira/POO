#include "contador.h"

using namespace std;

Contador::Contador()
{
     contador_ = 0;

}

Contador::Contador(int minimo){

     minimo_ = 0;
     maximo_ = 1000;
     inicial_ = 0;

     minimo_ = minimo;

     if (inicial_ < minimo_){
          setContador(0);
     }
     else{

          setContador(inicial_);

     }
}


Contador::Contador(int minimo, int maximo){

     minimo_ = 0;
     maximo_ = 1000;
     inicial_ = 0;

     minimo_ = minimo;
     maximo_ = maximo;

     if(inicial_ < minimo_){

          setContador(0);

     }
     else{
          if (inicial_ > maximo_){

               setContador(1000);
          }
          else{

               setContador(inicial_);
          }

     }


}
Contador::Contador(int minimo, int maximo, int inicial){

     minimo_ = minimo;
     maximo_ = maximo;
     inicial_ = inicial;

     if(inicial_ <= minimo_){
          setContador(minimo_);
     }
     if(inicial_ >= maximo_){
          setContador(maximo_);
     }
     if((inicial_ > minimo_) and (inicial_ < maximo_)){

          setContador(inicial_) ;
     }
     if((inicial_ > minimo_) and (inicial_ > maximo_)){
          inicial_= 0;
          setContador(0);
     }
     if((inicial_ < minimo_) and (inicial_ < maximo_)){
          inicial_= 0;
          setContador(0);
     }

}

Contador Contador::operator=(int contador){

     contador_ = contador;
     return *this;

}
Contador  Contador::operator=(const Contador &c){

     contador_ = c.contador_;
     return *this;

}

Contador Contador::operator++(int){

     Contador tmp=*this;
     ++contador_;
     return tmp;

}
