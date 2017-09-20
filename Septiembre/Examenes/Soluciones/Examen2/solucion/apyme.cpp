#include "apyme.hpp"
#include <iostream>
#include <cassert>

// Para usar exit
#include <stdlib.h>

#include <fstream>

using namespace std;
using namespace poo;



// Destructor
Apyme::~Apyme()
{
	if (_numeroPymes > 0 || _vectorPymes != NULL)
	   {
     		delete [] _vectorPymes;

		setNombreApyme("");
		setVectorPymes(0,NULL);
	  }
}


//
Pyme & Apyme::getPyme(int indice)
{
 assert ( (indice >= 0) && (indice < getNumeroPymes()) );

 return _vectorPymes[indice];
}


Pyme & Apyme::operator[](int indice)
{
 assert ( (indice >= 0) && (indice < getNumeroPymes()) );

 return _vectorPymes[indice];
}


void Apyme::setVectorPymes(int n, Pyme * v)
{
 	_numeroPymes = n;

	 if (_numeroPymes == 0)
		_vectorPymes = NULL;
 	else
	   {
		_vectorPymes = new Pyme[_numeroPymes];

		if (_vectorPymes == NULL)
			exit(1);
		else if (v != NULL) 
		     {
		       for (int i = 0; i < _numeroPymes; i++)
			{
			   // Uso del operador de asignación de Pyme
			   _vectorPymes[i] = v[i];
			}
		    }
	 }
}


void Apyme::leerApyme()
{
   int i, n;
   string nombre;
   string cadena;
 
   cout << "Número de pymes --> ";
   cin >> n;
   setVectorPymes(n);
 
   // Se elimina el salto de línea de la entrada
   getline(cin,cadena);

   cout << "\n Nombre de la APYME --> ";
   //cin >> nombre;
   // para permitir espacios en blanco
   getline(cin,nombre);

   setNombreApyme(nombre);

  for (i = 0; i < n; i++)
    {
	cout << "\nPyme nº " << i+1 << endl;
	getPyme(i).leerPyme();
    }

  cout << endl;
}

void Apyme::escribirApyme()
{
  int i, n;
  
   n = getNumeroPymes();

  cout << "Nombre de la APYME: " << getNombreApyme() << endl << endl;

  for (i = 0; i < n; i++)
    {
	cout << "Pyme nº " << i+1 << endl;
	getPyme(i).escribirPyme();
	cout << endl;
    }
}

// Escritura en un fichero
void Apyme::grabarEnFichero(string nombreFichero)
{

 //Declaracion del flujo de salida
   ofstream ficheroSalida; 

   //Se abre el fichero para leer
  //Se usa la función c.str para leer el nombre como una cadena de C con el carácter \0 al final
   ficheroSalida.open(nombreFichero.c_str(), ios::out); 

   // Se comprueba que se ha abierto el fichero correctamente
   if (!ficheroSalida)
   {
    cout << "Error al abrir el fichero\n";
    exit(1);
   }

  // Se escribe el nombre de la apyme
  ficheroSalida << getNombreApyme() << endl;

  // Se escribe el número de socios de la apyme
   int numeroPymes = getNumeroPymes();
   ficheroSalida << numeroPymes<< endl;

  // Se escriben las coordenadas de los socios en el fichero
  for (int i = 0; i < numeroPymes; i++)
   {
    ficheroSalida << "Pyme: " << getPyme(i).getNombre() << endl
                  << "Dirección: " << getPyme(i).getDireccion()  << endl
		  << "CIF: " << getPyme(i).getCIF()  << endl 
                  << "Propietario: " << getPyme(i).getPropietario() << endl << endl;
   }

   //Se cierra el fichero de entrada
   ficheroSalida.close();
}


