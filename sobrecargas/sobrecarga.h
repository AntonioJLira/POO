#ifndef SOBRECARGA
#define SOBRECARGA

#include <iostream>

using namespace std;

class Sobrecarga{

     private:

          int a_, b_, c_;

     public:

          // Constructor de la clase

          Sobrecarga(int a, int b, int c){a_=a; b_=b; c_=c;};
          int getA(){return a_;};
          int getB(){return b_;};
          int getC(){return c_;};
          void setA(int a){a_=a;};
          void setB(int b){b_=b;};
          void setC(int c){c_=c;};



          // Sobrecargas de operadores

               // Sobrecarga del operador asignación
               Sobrecarga operator=(const Sobrecarga &s);

               // Sobrecarga del operador suma
               Sobrecarga operator+(const Sobrecarga &s);

               // Sobrecarga del operador resta
               Sobrecarga operator-(const Sobrecarga &s);

               // Sobrecarga del operador suma con parametro
               friend Sobrecarga operator+(int n, Sobrecarga s);

               // Sobrecarga del operador suma con parametro
               friend Sobrecarga operator+(Sobrecarga s, int n);

               // Sobrecarga de incremento postfijo s++
               Sobrecarga operator++(int);

               // Sobrecarga de incremento prefijo ++s
               Sobrecarga operator++(void);

               // Sobrecarga de decremento postfijo s--
               Sobrecarga operator--(int);

               // Sobrecarga de decremento prefijo --s
               Sobrecarga operator--(void);

               // Sobrecarga del operador <<
               friend ostream & operator<<(ostream &o, const Sobrecarga  &s);

               // Sobrecarga del operador >>
               friend istream & operator>>(istream &i, Sobrecarga  &s);

          // ~Sobrecarga();


};



#endif
