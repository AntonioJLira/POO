#ifndef SOBRECARGA
#define SOBRECARGA

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


          // Sobrecargas de operadores

               // Sobrecarga del operador asignación
               Sobrecarga operator=(const Sobrecarga &s);

               // Sobrecarga del operador suma
               Sobrecarga operator+(const Sobrecarga &s);

               // Sobrecarga del operador resta
               Sobrecarga operator-(const Sobrecarga &s);

               // Sobrecarga del operador suma con parametro
               friend Sobrecarga operator+(int n, Sobrecarga s);

               // Sobrecarga de incremento postfijo s++
               Sobrecarga operator++(int);

               // Sobrecarga de incremento prefijo ++s
               Sobrecarga operator++(void);

               // Sobrecarga de decremento postfijo s--
               Sobrecarga operator--(int);

               // Sobrecarga de decremento prefijo --s
               Sobrecarga operator--(void);

               //friend std::istream & operator>>(std::istream& flujoEntrada, Pyme &p);
               //friend std::ostream & operator<<(std::ostream& flujoSalida, Pyme const &p);

          // ~Sobrecarga();


};



#endif
