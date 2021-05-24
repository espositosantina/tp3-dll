#include "pch.h"
#include "cVehiculos.h"



cVehiculos::cVehiculos(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento, bool esta_circulando): tarifaBase(tarifaBase)
{
	this->capacidad_pasajeros = capacidad_pasajeros;
	this->chasis = chasis;
	this->color = color;
	this->patente = patente;
	this->poliza = poliza;
	this->ultimo_mantenimiento = ultimo_mantenimiento;
	ultimo_mantenimiento->verificar_fecha();
	this->esta_circulando = esta_circulando;
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
void cVehiculos::Imprimir() {}

void cVehiculos::set_circulacion(bool circ)
{
	esta_circulando = circ;
}
bool cVehiculos::get_circulacion()
{
	return esta_circulando;
}

string cVehiculos::getClave()
{
	return to_string(patente);
}

bool cVehiculos::operator==(const cVehiculos& b) const
{
	if (this->patente == b.patente)
		return true;
	else
		return false;
}

