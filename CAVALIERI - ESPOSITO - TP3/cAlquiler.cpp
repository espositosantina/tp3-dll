#include "pch.h"
#include "cAlquiler.h"
#include "cClientes.h"
#include <iostream>
#include "fecha.h"
#include "cVehiculos.h"

cAlquiler::cAlquiler(cClientes* cliente, cVehiculos* vehiculo, int cant_ElementosSeguridad, fecha* inicio_reserva, fecha* fin_reserva, float montoTotal,string tipo, Lista* listaAlquiler)
{
	this->cliente = cliente;
	this->vehiculo = vehiculo;
	this->cant_ElementosSeguridad = cant_ElementosSeguridad;
	this->inicio_reserva = inicio_reserva;
	inicio_reserva->verificar_fecha();
	this->fin_reserva = fin_reserva;
	fin_reserva->verificar_fecha();
	this->montoTotal = montoTotal;
	this->tipo = tipo;
	//listaAlquiler
}

cAlquiler::~cAlquiler()
{
	//eliminar lista si es q la creo aca! ¡¡¡OK!!!
}

void cAlquiler::Imprimir()
{
	cout << "\n Cliente: " << cliente->dni << "\n Vehiculo: ";
	vehiculo->ImprimirVehiculo(tipo);
}