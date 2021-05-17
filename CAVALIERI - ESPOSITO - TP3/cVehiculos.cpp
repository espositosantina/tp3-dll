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
void cVehiculos::imprimir() {

	cout << "\n Capacidad de pasajeros: " << capacidad_pasajeros << "\n Numero de Chasis: " << chasis << "\n Color: ";
	PrintEnum(color);
	cout << "\n Patente: " << patente << "\n Poliza: " << poliza << "\n Fecha: " << ultimo_mantenimiento->fechaToString() << endl;

}

void cVehiculos::PasosMantenimiento()
{
	cout << "\n Pasos mantenimiento: ";
}
