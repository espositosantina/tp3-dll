#pragma once

#include <iostream>
#include <string>

using namespace std;

class cVehiculos;
class cClientes;
class cAlquiler;

class cEmpresa
{
	
	/*Adem�s de alquilar los veh�culos, la empresa tiene la capacidad de adquirir
		nuevos veh�culos, de retirarlos de circulaci�n y de realizarles mantenimiento.*/

public: 
	cEmpresa();
	~cEmpresa();

	void AdquirirNuevosVehiculos(); 
	void RetirarCirculacion();
	void RealizarMantenimiento();
	void alquilar();


};

