#ifndef _PYME_HPP_
#define _PYME_HPP_

#include <iostream>

#include "empresa.hpp"


namespace poo{

//!  Definición de la clase Pyme, que hereda de forma pública de la clase Empresa
class Pyme: public Empresa
{
  private:
	string _propietario; //!< Propietario de la Pyme

  public:


	//! \name CONSTRUCTORES
	/*!
		\brief Constructor con todos los argumentos parametrizados que utiliza los iniciadores de Empresa y_propietario
		\param nombre de la Pyme; valor por defecto: ""
		\param direccion de la Pyme; valor por defecto: ""
		\param CIF de la Pyme; valor por defecto: ""
		\param propietario que la Pyme ONG; valor por defecto: ""
	*/
	Pyme (string nombre = "", string direccion = "", string CIF = "", string propietario = ""): Empresa(nombre,direccion,CIF), _propietario(propietario)
	{
		// Se han usado los iniciadores
	}

	/*!
		\brief Constructor de copia
		\param p Pyme que va a asignar sus valores al Pyme actual 
		\warning El parámetro "s" se pasa como referencia constante
		\sa   getNombre, getDireccion, getCIF, getPropietario, setNombre, setDireccion, setCIF, setPropietario
	*/
	Pyme (Pyme const & p)
	{
		setNombre(p.getNombre());
		setDireccion(p.getDireccion());
		setCIF(p.getCIF());

		setPropietario(p.getPropietario());
	}


	//! \name FUNCIÓN DE ACCESO
	/*
		\brief Método que permite consultar el valor actual del atributo propietario de la clase Pyme
		\return Valor del atributo _propietario
	*/
	inline string getPropietario()const
	{
		return _propietario;
	}


	//! \name FUNCIÓN DE MODIFICACIÓN

	/*!
		\brief Método que permite modificar el valor actual del atributo _propietario de la clase Pyme
		\param v valor que se va a asignar al atributo _propietario de la Pyme
		\return void: no devuelve ningún valor
	*/
	inline void setPropietario(string v)
	{
		_propietario = v;
	}

	//! \name SOBRECARGA DEL OPERADOR DE ASIGNACIÓN

	/*!
		\brief Sobrecarga del operador "="
		\param p Pyme que va a asignar sus valores al Pyme actual 
		\warning El parámetro "p" se pasa como referencia constante
		\return Devuelve una referencia al objeto actual
		\sa   getNombre, getDireccion, getCIF, getPropietario, setNombre, setDireccion, setCIF, setPropietario
	*/
	Pyme & operator=(Pyme const & p)
	{
		setNombre(p.getNombre());
		setDireccion(p.getDireccion());
		setCIF(p.getCIF());

		setPropietario(p.getPropietario());

		return *this;
	}

	//! \name FUNCIONES DE LECTURA Y ESCRITURA
	/*!
		\brief Función que permite asignar a la Pyme actual los datos leídos desde el teclado
		\return void: no devuelve ningún valor
		\sa  leerEmpresa, setPropietario
	*/
	void leerPyme();

	/*!
		\brief Función que escribe por pantalla los valores de los atributos de la Pyme actual
		\return void: no devuelve ningún valor
		\sa    escribirEmpresa, getPropietario
	*/
	void escribirPyme();

	// SOBRECARGA DE LOS OPERADORES
	/*!
		\brief Sobrecarga del operador >>  que permite asignar a una Pyme los datos leídos desde el flujo de entrada pasado como parámetro
		\warning Función amiga de la clase Pyme
		\param flujoEntrada  desde el que se van a leer los nuevos valores que se van a asignar al Pyme pasado como parámetro
		\param p representa la Pyme a la que se le van a asignar los nuevos valores
		\return Devuelve una referencial al flujo de Entrada pasado como parámetro
		\sa   setNombre, setDireccion, setCIF, setPropietario
	*/
	friend std::istream & operator>>(std::istream &flujoEntrada, Pyme &p);

	/*!
		\brief Sobrecarga del operador <<  que permite escribir los valores de una Pyme en el flujo de salida pasado como parámetro
		\warning Función amiga de la clase Pyme
		\param flujoSalida en el que se van a escribir los valores de los atributos de la Pyme pasada como parámetro
		\param p representa la Pyme a la que se le van a asignar los nuevos valores
		\return Devuelve una referencial al flujo de Salida pasado como parámetro
		\sa   getNombre, getDireccion, getCIF, getPropietario
	*/
	friend std::ostream & operator<<(std::ostream &flujoSalida, Pyme const &p);


}; // Fin de Pyme

} // Fin de poo
#endif
