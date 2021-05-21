#include "pch.h"
#include "cAlquiler.h"
#include "cClientes.h"
#include <iostream>
#include "fecha.h"
#include "cVehiculos.h"

cAlquiler::cAlquiler(int dni, cVehiculos* vehiculo, int cant_ElementosSeguridad, fecha* inicio_reserva, fecha* fin_reserva)
{
	this->dni = dni;
	this->vehiculo = vehiculo;
	this->cant_ElementosSeguridad = cant_ElementosSeguridad;
	this->inicio_reserva = inicio_reserva;
	inicio_reserva->verificar_fecha();
	this->fin_reserva = fin_reserva;
	fin_reserva->verificar_fecha();
	this->montoTotal = vehiculo->CalcularTarifa();

}


cAlquiler::~cAlquiler()
{
}

void cAlquiler::Imprimir()
{
	cout << "\n Cliente: " << dni << "\n Vehiculo: " << vehiculo->To_string()
		<< "\n Elementos de seguridad: " << cant_ElementosSeguridad
		<< "\n Fecha de inicio de alquiler: " << inicio_reserva->fechaToString()
		<< "\n Fecha de fin de alquiler: " << fin_reserva->fechaToString()
		<< "\n Monto total: " << montoTotal << endl;
}

void cAlquiler::setMontoTotal(cVehiculos* vehiculo)
{
	montoTotal = vehiculo->CalcularTarifa();
}

