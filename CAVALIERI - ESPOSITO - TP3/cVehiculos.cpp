#include "pch.h"
#include "cVehiculos.h"
#include "fecha.h"
#include "funciones.h"

cVehiculos::cVehiculos(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento): tarifaBase(tarifaBase)
{
	this->capacidad_pasajeros = capacidad_pasajeros;
	this->chasis = chasis;
	this->color = color;
	this->patente = patente;
	this->poliza = poliza;
	this->ultimo_mantenimiento = ultimo_mantenimiento;
	ultimo_mantenimiento->verificar_fecha();
}
cVehiculos::~cVehiculos()
{
}
string cVehiculos::To_string() 
{

	return "\n Capacidad de pasajeros: " + to_string(capacidad_pasajeros)+
		   "\n Numero de Chasis: " + to_string(chasis) +
		   "\n Color: " + PrintEnum(color) +
	       "\n Patente: " + to_string(patente) + 
		   "\n Poliza: " + to_string(poliza) +
		   "\n Fecha: " + ultimo_mantenimiento->fechaToString();
	
}

//void cVehiculos::ImprimirVehiculo(string tipo)
//{
//	switch (tipo)
//	{
//	case 1: tipo= auto imprimir()...
//	default:
//		break;
//	}
//}

void cVehiculos::PasosMantenimiento()
{
	cout << "\n Pasos mantenimiento: ";
}
