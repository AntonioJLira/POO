#include <vector>
#include <iostream>

using namespace std;

int main(){

     vector<int> v(10);

     for(vector<int>::iterator i=v.begin();i<v.size();i++){

          cout << "\nElemento 1: ";
          cin >> v[i];

     }

     cout << "\n\nLos elementos del vector son: ";

     for(vector<int>::iterator i=v.begin();i<v.size();i++){

          cout << v[i] << " ";

     }




     return 0;
}
