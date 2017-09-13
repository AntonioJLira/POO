#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

int main(){

     vector<int> v(10);

     for(int i=0;i<v.size();i++){
          cout << "Elemento " << i << ":";
          cin >> v[i];
     }


     cout << "\nLos elementos del vector sin ordenar son: ";

     for(int i=0;i<v.size();i++){
          cout << v[i] << " ";
     }

     cout << "\nLos elementos del vector ordenados son: ";

     sort(v.begin(),v.end());

     for(int i=0;i<v.size();i++){
          cout << v[i] << " ";
     }

     cout << "\nLos elementos del vector ordenados del reves son: ";

     reverse(v.begin(),v.end());

     for(int i=0;i<v.size();i++){
          cout << v[i] << " ";
     }

     return 0;
}
