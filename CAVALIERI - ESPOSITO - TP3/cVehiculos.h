#pragma once
#include <string>
#include "funciones.h"


using namespace std;

class fecha;

class cVehiculos
{
protected:
	int capacidad_pasajeros;
	int chasis;
	eColor color;
	int patente;
	int poliza;
	const float tarifaBase;
	fecha* ultimo_mantenimiento;
	
public: 
	cVehiculos(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento);
	virtual ~cVehiculos();
	virtual string To_string();
	//void ImprimirVehiculo(string tipo);
	virtual void PasosMantenimiento();
};

