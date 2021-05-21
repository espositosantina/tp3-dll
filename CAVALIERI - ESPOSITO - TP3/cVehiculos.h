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
	bool esta_circulando;
	
public: 
	cVehiculos(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento, bool esta_circulando);
	virtual ~cVehiculos();
	virtual string To_string();
	virtual void Imprimir();
	//void ImprimirVehiculo(string tipo);
	//virtual void PasosMantenimiento();
	virtual void set_circulacion(bool circ);
	virtual bool get_circulacion();
	virtual float CalcularTarifa() {}
	virtual int getPatente() {}
};


//ostream& operator<< (ostream& salida, string& info);
//
//ostream& operator<< (ostream& salida, cVehiculos& V)
//{
//    salida << V.To_string();
//    return salida;
//}