#include<iostream>
#include<string>
#include<fstream>
#include<cassert>
#include<cstdlib>

#include "apyme.hpp"

using namespace std;
using namespace poo;

	Apyme::Apyme(){
		_nombreApyme=("");
		_vectorPymes=0;
		}

	Apyme::~Apyme(){
		delete [] _vectorPymes;
		setNombreApyme("");
		setVectorPymes(0,NULL);
 		}
	Pyme & Apyme::getPyme(int indice){
		assert((indice >= 0) && (indice < _numeroPymes));
		return _vectorPymes[indice];
		}
	
	Pyme & Apyme::operator [](int indice){
		assert((indice >= 0) && (indice < _numeroPymes));
		return _vectorPymes[indice];
		}

	void Apyme::setVectorPymes(int n,Pyme * v){
		int i;
		setNumeroPymes(n);
		if(_numeroPymes==0){
			_vectorPymes=NULL;
			}
		else{
			_vectorPymes=new Pyme[_numeroPymes];
			if(_vectorPymes==NULL){
				exit(1);
				}
			else if(v!=NULL){
				for(i=0;i<_numeroPymes;i++){
						_vectorPymes[i]=v[i];
					}
				}
			}
		}

	Apyme & Apyme::operator=(Apyme & a){
		setNombreApyme(a.getNombreApyme());
		setVectorPymes(a.getNumeroPymes(),a.getVectorPymes());
		return *this;
		}

	void Apyme::leerApyme(){
		string nombreapyme;
		int n,i;
		cout << "Nombre de la Apyme: ";
		cin  >> nombreapyme;
		setNombreApyme(nombreapyme);
		cout << "Numero Pymes: ";
		cin >> n;
		setVectorPymes(n);
		for(i=0;i<n;i++){
			getPyme(i).leerPyme();
			}
		}

	void Apyme::escribirApyme(){
		int i,n;
		n=getNumeroPymes();
		cout << "Nombre Apyme: " << getNombreApyme() << endl;
		for(i=0;i<n;i++){
			cout << "Pyme nº" << i+1 << "\n" ;
			getPyme(i).escribirPyme();
			}
		}

	void Apyme::grabarEnFichero(string nombrefichero){
		ofstream fichero;
		int n=getNumeroPymes();
		int i;
		fichero.open(nombrefichero.c_str(),ios::out);
		if(!fichero){
			cout << "No se pudo abrir el fichero" << endl;
			exit(1);
			}
		fichero << getNombreApyme() << "\n" << getNumeroPymes() << "\n";
		for(i=0;i<n;i++){
			fichero << getPyme(i).getNombre() << " "<< getPyme(i).getDireccion() << " " << getPyme(i).getCIF() << " " << getPyme(i).getPropietario() << "\n";
			}
		fichero.close();
		}















