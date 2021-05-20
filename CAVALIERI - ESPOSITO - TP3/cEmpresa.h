#pragma once

#include <iostream>
#include <string>

using namespace std;

class cVehiculos;
class cClientes;
class cAlquiler;
class T;

class cEmpresa
{
	
	/*Adem�s de alquilar los veh�culos, la empresa tiene la capacidad de adquirir
		nuevos veh�culos, de retirarlos de circulaci�n y de realizarles mantenimiento.*/

	Lista<cAlquiler>* lista_alquileres;
	Lista<cVehiculos>* lista_vehiculos;
	Lista<cClientes>* lista_clientes;

public: 
	cEmpresa(Lista<cVehiculos>* lista_vehiculos, Lista<cClientes>* lista_clientes, Lista<cAlquiler>* lista_alquileres);
	~cEmpresa();

	void AdquirirNuevosVehiculos(cVehiculos* vehiculo);
	void ComenzarCirculacion(int patente);
	void RetirarCirculacion(int patente);
	void RealizarMantenimiento(int patente);

	void Alquilar(int patente);


};

