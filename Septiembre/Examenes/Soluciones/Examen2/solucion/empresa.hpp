#ifndef _EMPRESA_HPP_
#define _EMPRESA_HPP_

#include <string>

using std::string;

namespace poo{

//!  Definición de la clase Empresa
class Empresa
{
  private:
	string _nombre;    //!< Nombre de la empresa
	string _direccion; //!< Direccion de la empresa
	string _CIF;       //!< CIF de la empresa

  public:

	//! \name CONSTRUCTORES
	/*!
		\brief Constructor con todos los argumentos parametrizados  
		\param nombre de Empresa; valor por defecto: ""
		\param direccion de Empresa; valor por defecto: ""
		\param CIF de Empresa; valor por defecto: ""
	*/
	Empresa (string nombre = "", string direccion = "", string CIF = "")
	{
		_nombre    = nombre;
		_direccion = direccion;
		_CIF       = CIF;
	}

	/*!
		\brief Constructor de copia
		\param e Empresa que va a asignar sus valores a la Empresa actual 
		\warning El parámetro "e" se pasa como referencia constante
		\sa   getNombre, getDireccion, getCIF, setNombre, setDireccion, setCIF
	*/
	Empresa (Empresa const & e)
	{
		setNombre(e.getNombre());
		setDireccion(e.getDireccion());
		setCIF(e.getCIF());
	}


	//! \name FUNCIONES DE ACCESO
	/*
		\brief Método que permite consultar el valor actual del atributo _nombre de la clase Empresa
		\return Valor del atributo _nombre
	*/
	inline string getNombre()const
	{
		return _nombre;
	}

	/*!
		\brief Método que permite consultar el valor actual del atributo _direccion de la clase Empresa
		\return Valor del atributo _direccion
	*/
	inline string getDireccion()const
	{
		return _direccion;
	}

	/*!
		\brief Método que permite consultar el valor actual del atributo _CIF de la clase Empresa
		\return Valor del atributo _CIF
	*/
	inline string getCIF()const
	{
		return _CIF;
	}

	//! \name FUNCIONES DE MODIFICACIÓN
	/*
		\brief Método que permite modificar el valor actual del atributo _nombre de la clase Pesona
		\param v valor que se va a asignar al atributo _nombre de Empresa
		\return void: no devuelve ningún valor
	*/
	inline void setNombre(string v)
	{
		_nombre = v;
	}

	/*!
		\brief Método que permite modificar el valor actual del atributo _direccion de la clase Pesona
		\param v valor que se va a asignar al atributo _direccion de Empresa
		\return void: no devuelve ningún valor
	*/
	inline void setDireccion(string v)
	{
		_direccion = v;
	}

	/*!
		\brief Método que permite modificar el valor actual del atributo _CIF de la clase Pesona
		\param v valor que se va a asignar al atributo _CIF de Empresa
		\return void: no devuelve ningún valor
	*/
	inline void setCIF(string v)
	{
		_CIF = v;
	}



	//! \name FUNCIONES DE LECTURA Y ESCRITURA
	/*!
		\brief Función que permite asignar a la Empresa actual los datos leídos desde el teclado
		\return void: no devuelve ningún valor
		\sa     setNombre, setDireccion, setCIF
	*/
	void leerEmpresa();

	/*!
		\brief Función que permite escribir por pantalla los valores de los atributos de la Empresa actual
		\return void: no devuelve ningún valor
		\sa     getNombre, getDireccion, getCIF
	*/
	void escribirEmpresa();
}; // Fin de Empresa

} // Fin de poo
#endif
