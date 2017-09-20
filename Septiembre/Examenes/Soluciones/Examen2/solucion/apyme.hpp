#ifndef _APYME_HPP_
#define _APYME_HPP_

#include "pyme.hpp"

namespace poo{

//!  Definición de la clase Apyme
class Apyme
{
  private:	
	string  _nombreApyme;  //!< Nombre de la Apyme
	int     _numeroPymes;  //!< Número de pymes de la Apyme
	Pyme  * _vectorPymes;  //!< Vector que almacena los datos de los pymes de la Apyme

  public:

	//! \name CONSTRUCTORES
	/*!
		\brief Constructor por defecto: asigna la cadena "" al nombre de la Apyme y pone a cero el número de pymes
	*/
	Apyme ()
	{
		setNombreApyme("");
		setVectorPymes(0);
	}

	/*!
		\brief   Constructor de copia
		\param   a Apyme que va a asignar sus valores a la Apyme actual
		\warning El parámetro "a" se pasa como referencia constante
		\sa      getNombreApyme, getNumeroPymes, getVectorPymes, setNombreApyme, setNumeroPymes, setVectorPymes
	*/
	Apyme (Apyme const & a)
	{
		setNombreApyme(a.getNombreApyme());
		setVectorPymes(a.getNumeroPymes(), a.getVectorPymes());
	}


	//! \name DESTRUCTOR
	/*!
		\brief Destructor: libera la memoria ocupada por _vectorPymes ,pone el número de pymes a cero y asigna la cadena vacía a _nombreApyme
		\sa setNombreApyme, setVectorPymes
	*/
	~Apyme();


	//! \name FUNCIONES DE ACCESO
	/*!
		\brief Método que permite consultar el valor actual del atributo _nombreApyme de la clase Apyme
		\return Valor del atributo _nombreApyme
		\warning La función utiliza el calificador "const" debido al constructor de copia
	*/
	inline string getNombreApyme()const
	{
		return _nombreApyme;
	}


	/*!
		\brief Método que permite consultar el valor actual del atributo _numeroPymes de la clase Apyme
		\return Valor del atributo _numeroPymes
		\warning La función utiliza el calificador "const" debido al constructor de copia
	*/
	inline int getNumeroPymes()const
	{
		return _numeroPymes;
	}

	/*!
		\brief Método que permite consultar el valor actual del atributo _vectorPymes de la clase Apyme
		\return Valor del atributo _vectorPymes
		\warning La función utiliza el calificador "const" debido al constructor de copia
	*/
	inline Pyme * getVectorPymes()const
	{
		return _vectorPymes;
	}

	//! \name OTRAS FUNCIONES DE ACCESO
	/*!
		\brief Método que permite consultar el valor actual del Pyme que ocupa la posición señalada por un índice
		\param indice Indica la posición del Pyme que se desea consultar
		\return Referencia al Pyme señalado por un índice
		\sa     setVectorPymes
	*/
	Pyme & getPyme(int indice);


	/*!
		\brief Sobrecarga del operador [] que permite consultar el valor actual del Pyme que ocupa la posición señalada por un índice
		\param indice Indica la posición del Pyme que se desea consultar
		\return Referencia al Pyme señalado por un índice
		\sa     setVectorPymes
	*/
	Pyme & operator[](int indice);



	//! \name FUNCIONES DE MODIFICACIÓN
	/*!
		\brief Método que permite asignar un nuevo valor al atributo _nombreApyme de la clase Apyme
		\param v nuevo valor del atributo _nombreApyme
	*/
	inline void setNombreApyme(string v)
	{
		_nombreApyme = v;
	}

	/*!
		\brief Método que permite asignar un nuevo valor al atributo _vectorPymes de la clase Apyme
		\param n representa el nuevo número de pymes de la Apyme; valor por defecto: 0
		\param v nuevo valor del atributo _setVectorPymes; valor por defecto: NULL
		\return void: no devuelve ningún valor
	*/

	void setVectorPymes(int n = 0, Pyme * v = NULL);



	//! \name SOBRECARGA DEL OPERADOR DE ASIGNACIÓN
	/*!
		\brief   Sobrecarga del operador "="
		\param   a Apyme que va a asignar sus valores a la Apyme actual
		\warning El parámetro "o" se pasa como referencia constante
		\sa      getNombreApyme, getNumeroPymes, getVectorPymes, setNombreApyme, setNumeroPymes, setVectorPymes
	*/
	Apyme & operator=(Apyme const & a)
	{
		setNombreApyme(a.getNombreApyme());
		setVectorPymes(a.getNumeroPymes(), a.getVectorPymes());

		return *this;
	}

	//! \name FUNCIONES DE LECTURA Y ESCRITURA
	/*!
		\brief Función que permite asignar a la Apyme actual los datos leídos desde el teclado
		\return void: no devuelve ningún valor
		\sa  getNumeroPymes, setNombreApyme, getPyme, leerPyme
	*/
	void leerApyme();

	/*!
		\brief Función que permite escribir por pantalla los datos de la Apyme actual 
		\return void: no devuelve ningún valor
		\sa  getNumeroPymes, getNombreApyme, getPyme, escribirPyme
	*/
	void escribirApyme();

	/*!
		\brief Función que permite escribir en un fichero los datos de la Apyme actual 
		\param nombreFichero en el que se van a escribir los datos de la Apyme
		\return void: no devuelve ningún valor
		\sa  getNumeroPymes, getNombreApyme, getPyme, getNombre, getApellidos, getEdad, getDonativo
	*/
	void grabarEnFichero(string nombreFichero);


}; // Fin de Apyme

} // Fin de poo
#endif
