#include <iostream>
#include "sobrecargas.h"

using namespace std;

int main(){

     Sobrecargas A(3,4,6);
     Sobrecargas B(5,9,7);
     Sobrecargas C(1,1,1);
     Sobrecargas Q(1,0,5);
     Sobrecargas T(8,7,5);
     Sobrecargas X(1,2,3);
     Sobrecargas Y(3,2,1);


     cout << "\nObjeto 1: (" <<A.getA() << "," << A.getB() << "," << A.getC() << ")";
     cout << "\nObjeto 2: (" <<B.getA() << "," << B.getB() << "," << B.getC() << ")";
     cout << "\nObjeto 3: (" <<C.getA() << "," << C.getB() << "," << C.getC() << ")";


     Q=T;
     cout << "\nObjeto Resultado Q=T: (" <<Q.getA() << "," << Q.getB() << "," << Q.getC() << ")";

     A=A+B;
     cout << "\nObjeto Resultado A+B: (" <<A.getA() << "," << A.getB() << "," << A.getC() << ")";

     A = A + 10;
     cout << "\nObjeto Resultado: A+10: (" <<A.getA() << "," << A.getB() << "," << A.getC() << ")";

     B = 10 + B;
     cout << "\nObjeto Resultado: 10+B: (" <<B.getA() << "," << B.getB() << "," << B.getC() << ")";

     C++;
     cout << "\nObjeto Resultado: C++: (" <<C.getA() << "," << C.getB() << "," << C.getC() << ")";

     ++C;
     cout << "\nObjeto Resultado: ++C: (" <<C.getA() << "," << C.getB() << "," << C.getC() << ")";

     C=C-A;
     cout << "\nObjeto Resultado: C=C-A: (" <<C.getA() << "," << C.getB() << "," << C.getC() << ")";


     X=X-Y;
     cout << "\nObjeto Resultado: X=X-Y: (" <<X.getA() << "," << X.getB() << "," << X.getC() << ")";

     Y=3+Y;
     cout << "\nObjeto Resultado: Y=Y-2: (" <<Y.getA() << "," << Y.getB() << "," << Y.getC() << ")";

     Y=Y-2;
     cout << "\nObjeto Resultado: Y=Y-2: (" <<Y.getA() << "," << Y.getB() << "," << Y.getC() << ")";

     X--;
     cout << "\nObjeto Resultado: X--: (" <<X.getA() << "," << X.getB() << "," << X.getC() << ")";

     --X;
     cout << "\nObjeto Resultado: X--: (" <<X.getA() << "," << X.getB() << "," << X.getC() << ")";


     cout << "El valor de A es → " << A << "\n";
     cout << "El valor de B es → " << B << "\n";
     cout << "El valor de C es → " << C << "\n";

     cin >> A;
     cout << "El valor actual del objeto A es → " << A << "\n";

     return 0;

}
