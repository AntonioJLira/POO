#include "contador.h"

using namespace std;


Contador::Contador(int minimo, int maximo, int inicial){

     list <int>L;

     if(maximo<minimo){

          inicial = 0;

     }
     if((inicial > maximo) or (inicial < minimo)){

          inicial = 0;

     }
     minimo_ = minimo;
     maximo_ = maximo;
     inicial_ = inicial;

     L.push_back(inicial_);

}

void Contador::operator=(int num){

     if(num > maximo_){

          num = maximo_;

     }
     if(num < minimo_){

          num = minimo_;

     }
     inicial_ = num;
     contador_.push_back(inicial_);
}

void Contador::operator=(const Contador &c){

     maximo_ = c.maximo_;
     minimo_ = c.minimo_;
     inicial_ = c.inicial_;
     contador_.push_back(inicial_);
}

Contador Contador::operator++(int){     // Para incremento postfijo

     Contador tmp = *this;
     ++inicial_;

     if(inicial_ > maximo_){

          inicial_ = maximo_;

     }

     contador_.push_back(inicial_);

     return tmp;

}

Contador Contador::operator++(void){    // Para incremento pretfijo

     ++inicial_;

     if(inicial_ > maximo_){
          inicial_ = maximo_;
     }

     contador_.push_back(inicial_);

     return *this;

}

Contador Contador::operator--(int){

     Contador tmp = *this;

     --inicial_;

     if(inicial_ < minimo_){

          inicial_ = minimo_;
     }

     contador_.push_back(inicial_);

     return tmp;

}

Contador Contador::operator--(void){

     --inicial_;
     if(inicial_ < minimo_){

          inicial_ = minimo_;
     }

     contador_.push_back(inicial_);

     return *this;

}

Contador operator+(Contador c, int n){  // Solamente lleva un Contador

     if((c.inicial_ + n) > (c.maximo_)){
          c.inicial_ = c.maximo_;
     }else{
          c.inicial_ = c.inicial_ + n;
     }

     c.contador_.push_back(c.inicial_);

     return c;

}

Contador operator+(int n, Contador c){

     if(c.inicial_ + n > c.maximo_){

          c.inicial_ = c.maximo_;

     }else{

          c.inicial_ = c.inicial_ + n;

     }

     c.contador_.push_back(c.inicial_);

     return c;

}

Contador operator-(Contador c, int n){

     if(c.inicial_-n <c.minimo_){
        c.inicial_=c.minimo_;
     }else{
        c.inicial_=c.inicial_-n;
     }
     c.contador_.push_back(c.inicial_);
     return c;

}

Contador operator-(int n, Contador c){

     if(n-c.inicial_ <c.minimo_){
        c.inicial_=c.minimo_;
     }else{
        c.inicial_=n-c.inicial_;
     }
     c.contador_.push_back(c.inicial_);
     return c;

}
