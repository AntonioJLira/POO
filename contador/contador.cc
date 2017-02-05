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

          /*

               Puntero this → Cuando se invoca a una función miembro se le
               pasa automaticamente el puntero del objeto que la ha invocado
               (esta es la forma interna en que la función miembro puede
               acceder a los datos de este objeto concreto). Ese puntero se
               denomina en el interior de dicha función como el puntero
               this.
               El puntero this es un parametro implicito a todas las funciones
               miembro de una clase, es decir, que todas las funciones miembro
               de una clase lo reciben automaticamente (salvo las estaticas)
               Teniendo en cuenta esto, se puede acceder a los miembros de una
               clase escribiendo directamente su nombre, o bien, antecediendo
               this →.

          */

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

Contador operator+(Contador c, int n){  // Solamente lleva un Contador ya que
                                        // no es funcion miembro de la clase

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

bool Contador::undo(int n){

     int j=0;
     int tam=contador_.size();

     if((n > tam) or (tam <= 0 )){

          return false;

     }
     while(j<n){
          contador_.pop_back(); // Elimina el último elemento de la lista
          j++;
     }

     inicial_ = contador_.back();  // Devuelve la posición final, es decir
     return true;                  // el tamaño (?)

}
