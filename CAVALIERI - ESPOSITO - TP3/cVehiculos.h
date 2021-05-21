#pragma once
#include <string>
#include "funciones.h"
#include "fecha.h"

#define _CRT_SECURE_NO_WARNINGS

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
	bool esta_circulando;
	
public: 
	cVehiculos(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento, bool esta_circulando);
	virtual ~cVehiculos();
	virtual string To_string();
	virtual void Imprimir();
	virtual void set_circulacion(bool circ);
	virtual bool get_circulacion();
	virtual float CalcularTarifa() = 0;
	virtual int getPatente() = 0;
	string getClave();
	bool operator ==(const cVehiculos& b) const;

};

