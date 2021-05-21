#pragma once

#include <iostream>
#include <string>

using namespace std;

class cVehiculos;
class cClientes;
class cAlquiler;
class T;
class cAutos;
class cMotos;
class cCamionetas;
class cTrafics;
class cListaAlquileres;

class cEmpresa
{
	
	/*Además de alquilar los vehículos, la empresa tiene la capacidad de adquirir
		nuevos vehículos, de retirarlos de circulación y de realizarles mantenimiento.*/

	cListaAlquileres* lista_alquileres;
	Lista<cVehiculos>* lista_vehiculos;
	Lista<cClientes>* lista_clientes;

public: 
	cEmpresa(Lista<cVehiculos>* lista_vehiculos, Lista<cClientes>* lista_clientes, cListaAlquileres* lista_alquileres);
	~cEmpresa();

	void AdquirirNuevosVehiculos(cVehiculos* vehiculo);
	void ComenzarCirculacion(int patente);
	void RetirarCirculacion(int patente);
	void RealizarMantenimiento(int patente);

	void Alquilar(int dni, cVehiculos* vehiculo, int cant_ElementosSeguridad, fecha* inicio_reserva, fecha* fin_reserva);


};

