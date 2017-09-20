#include <iostream>
#include <vector>
#include "sobrecargas.h"

using namespace std;

Sobrecargas::Sobrecargas(int a, int b, int c){

     a_ = a;
     b_ = b;
     c_ = c;

}

Sobrecargas Sobrecargas::operator=(const Sobrecargas &s){

     a_ = s.a_;
     b_ = s.b_;
     c_ = s.c_;

     return *this;

}

Sobrecargas Sobrecargas::operator+(const Sobrecargas &s){

     Sobrecargas aux(0,0,0);

     aux.a_ = a_ + s.a_;
     aux.b_ = b_ + s.b_;
     aux.c_ = c_ + s.c_;

     return aux;

}

Sobrecargas operator+(Sobrecargas s, int n){

     s.a_ = s.a_ + n;
     s.b_ = s.b_ + n;
     s.c_ = s.c_ + n;

     return s;
}

Sobrecargas operator+(int n, Sobrecargas s){

     s.a_ = n + s.a_;
     s.b_ = n + s.b_;
     s.c_ = n + s.c_;

     return s;

}

Sobrecargas Sobrecargas::operator++(int){

     Sobrecargas aux = *this;

     a_++;
     b_++;
     c_++;

     return aux;

}

Sobrecargas Sobrecargas::operator++(void){

     ++a_;
     ++b_;
     ++c_;

     return *this;

}

Sobrecargas Sobrecargas::operator-(const Sobrecargas &s){

     Sobrecargas aux(0,0,0);

     aux.a_ = a_ - s.a_;
     aux.b_ = b_ - s.b_;
     aux.c_ = c_ - s.c_;

     return aux;

}

Sobrecargas operator-(Sobrecargas s, int n){

     s.a_ = s.a_ - n;
     s.b_ = s.b_ - n;
     s.c_ = s.c_ - n;

     return s;

}

Sobrecargas operator-(int n, Sobrecargas s){

     s.a_ = n - s.a_ ;
     s.b_ = n - s.b_ ;
     s.c_ = n - s.c_;

     return s;
}

Sobrecargas Sobrecargas::operator--(int){

     Sobrecargas aux = *this;

     a_--;
     b_--;
     c_--;

     return aux;

}

Sobrecargas Sobrecargas::operator--(void){

     --a_;
     --b_;
     --c_;

     return *this;

}

ostream & operator<<(ostream &o, const Sobrecargas &s){

     o << "(" << s.a_ << "," << s.b_ << "," << s.c_ << ")";

     return o;

}

istream & operator>>(istream &i, Sobrecargas &s){

     cout << "Introduce valores para (a, b, c): ";
     i >> s.a_ >> s.b_ >> s.c_;
     i.ignore();

     return i;

}
