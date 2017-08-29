#include <iostream>
#include <cstring>

//#define NDEBUG   // Modo depuracion/produccion

#include <cassert>

using namespace std;

class Fecha {
private:
  int d_, m_, a_;
public: // o private
void  inv() {
    assert(1 <= d_ && d_ <= 31);
    assert(1 <= m_ && m_ <= 12 );
    assert(0 <= a_);
  }
bool setd(int nd){d_=nd;inv();} // Se podría invocar en cualquier momento
};


int main()
{
Fecha f;
f.setd(44);
//f.inv(); //Si fuese public se epodría invocar desde cualquier punto
}


