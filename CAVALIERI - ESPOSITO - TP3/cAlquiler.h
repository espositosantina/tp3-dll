#pragma once
#include <string>
#include <iostream>
using namespace std;

class cClientes;
class cVehiculos;
class fecha;
class T;

class cAlquiler
{
	
	/*En los alquileres se detalla el cliente, el veh�culo, la cantidad de cada uno de los elementos
		de seguridad / adicionales involucrados, la fecha de inicio y de fin de la reserva y el monto
		total.
		Se tiene una lista de alquileres que almacene todos los alquileres que existen.
		Se debe poder listar todos los alquileres por tipo de vehiculo y calcular la ganancia total de
		eso. (Ayuda: Utilizar una clase que hereda de la lista template y extenderla para que permita
			esto).*/


	cClientes* cliente;
	cVehiculos* vehiculo;
	int cant_ElementosSeguridad;
	fecha* inicio_reserva;
	fecha* fin_reserva;
	float montoTotal;
	string tipo;
	T* listaAlquiler;
public: 
	cAlquiler(cClientes* cliente,cVehiculos* vehiculo,int cant_ElementosSeguridad,fecha* inicio_reserva,fecha* fin_reserva,float montoTotal,string tipo, Lista* listaAlquiler);
	~cAlquiler();

	void Imprimir();//cada alquiler
	//cuando imprimo la lista de alquileres tambien imprimir la ganancia total (suma de todos los alquileres)

	void alquilar();
};

