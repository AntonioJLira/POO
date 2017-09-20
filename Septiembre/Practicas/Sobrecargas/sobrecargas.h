#ifndef SOBRECARGAS_H
#define SOBRECARGAS_H

#include <iostream>
#include <vector>

using namespace std;

class Sobrecargas{

     private:

          int a_, b_, c_;
          

     public:

          // Constructor de la clase base
          Sobrecargas(int a, int b, int c);

          // Getters y Setters
          int getA(){return a_;};
          int getB(){return b_;};
          int getC(){return c_;};
          void setA(int a){a_ = a;};
          void setB(int b){b_ = b;};
          void setC(int c){c_ = c;};

          // operador de asignacion
          Sobrecargas operator=(const Sobrecargas &s);

          // Sobrecarga del operador + (suma de 2 objetos)
          Sobrecargas operator+(const Sobrecargas &s);

          // Sobrecarga del operador + (suma de objeto y parametro)
          friend Sobrecargas operator+(Sobrecargas s, int n);
          friend Sobrecargas operator+(int n, Sobrecargas s);

          // Sobrecarga del operador ++ (postfijo y prefijo)
          Sobrecargas operator++(int);
          Sobrecargas operator++(void);

          // Sobrecargas del operador - (resta de dos objetos)
          Sobrecargas operator-(const Sobrecargas &s);

          friend Sobrecargas operator-(Sobrecargas s,int n);
          friend Sobrecargas operator-(int n,Sobrecargas s);

          Sobrecargas operator--(int);
          Sobrecargas operator--(void);

          // Sobrecarga del operador <<
          friend ostream & operator<<(ostream &o, const Sobrecargas  &s);

          // Sobrecarga del operador >>
          friend istream & operator>>(istream &i, Sobrecargas  &s);





};


#endif
