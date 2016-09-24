// Declaracion de la clase Dados

#ifndef DADOS_H		//Guardas de incusion, se inluyen para evitar recompilar dos veces el mismo fichero.
#define DADOS_H
#include <cstdlib>

class Dados {

	public: // Aqui meteremos los metodos de las variables

		Dados();
		void lanzamiento();
		bool setDado1(int i=0);
		bool setDado2(int j=0);
		int getDado1() { return d1_; };
		int getDado2() { return d2_; };
		int getSuma() { return d1_ + d2_; };
		int getDiferencia(){return abs( d1_ - d2_);};
		int getLanzamiento(){return lanzamiento_;};
		int getLanzamiento1(){return lanzamiento_/2;};
		int getLanzamiento2(){return lanzamiento_/2;};
		int setMedia1();
		int getMedia1(){return media_;}; 





	private: // Aqui declararemos las variables que se utilizar�n

		int d1_, d2_,lanzamiento_,media_;

};

#endif
