#pragma once

#include <iostream>
#include <string>

using namespace std;

class cVehiculos;
class cClientes;
class cAlquiler;

class cEmpresa
{
	
	/*Además de alquilar los vehículos, la empresa tiene la capacidad de adquirir
		nuevos vehículos, de retirarlos de circulación y de realizarles mantenimiento.*/

public: 
	cEmpresa();
	~cEmpresa();

	void AdquirirNuevosVehiculos(); 
	void RetirarCirculacion();
	void RealizarMantenimiento();
	void alquilar();


};

