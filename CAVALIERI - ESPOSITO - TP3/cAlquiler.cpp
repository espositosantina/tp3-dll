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
	cout << Alquiler_To_string() << endl;
}

string cAlquiler::Alquiler_To_string()
{
    setMontoTotal(vehiculo);
	return "\n DNI cliente: " + to_string(dni) + 
		   "\n Vehiculo:" + vehiculo->To_string() +
	       "\n Cantidad de elementos de seguridad:" + to_string(cant_ElementosSeguridad)+
           "\n Fecha de inicio de reserva:" + inicio_reserva->fechaToString() +
		   "\n Fecha de fin de reserva:" + fin_reserva->fechaToString() +
		   "\n Monto total a pagar:" + to_string(montoTotal);
}

bool cAlquiler::operator==(const cAlquiler& b) const
{
	if (this->dni == b.dni) 
		return true;
	else
		return false;
}

string cAlquiler::getClave()
{
	return to_string(dni);
}

void cAlquiler::setMontoTotal(cVehiculos* vehiculo)
{
	montoTotal = vehiculo->CalcularTarifa();
}

