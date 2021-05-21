#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
using namespace std;

class cClientes;
class cVehiculos;
class fecha;
class T;

class cAlquiler
{
	friend class cListaAlquileres;
	/*En los alquileres se detalla el cliente, el vehículo, la cantidad de cada uno de los elementos
	de seguridad / adicionales involucrados, la fecha de inicio y de fin de la reserva y el monto
	total.
	Se tiene una lista de alquileres que almacene todos los alquileres que existen.
	Se debe poder listar todos los alquileres por tipo de vehiculo y calcular la ganancia total de
	eso. (Ayuda: Utilizar una clase que hereda de la lista template y extenderla para que permita
	esto).*/


	int dni;
	cVehiculos* vehiculo;
	int cant_ElementosSeguridad;
	fecha* inicio_reserva;
	fecha* fin_reserva;
	float montoTotal;

public: 
	cAlquiler(int dni, cVehiculos* vehiculo,int cant_ElementosSeguridad,fecha* inicio_reserva,fecha* fin_reserva);
	~cAlquiler();

	void Imprimir();
	string	Alquiler_To_string();

	void setMontoTotal(cVehiculos* vehiculo);
	//cada alquiler
	//cuando imprimo la lista de alquileres tambien imprimir la ganancia total (suma de todos los alquileres)

};

