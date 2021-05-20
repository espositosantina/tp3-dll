#include "pch.h"
#include "cAlquiler.h"
#include "cClientes.h"
#include <iostream>
#include "fecha.h"
#include "cVehiculos.h"

cAlquiler::cAlquiler(int dni, int patente, int cant_ElementosSeguridad, fecha* inicio_reserva, fecha* fin_reserva, float montoTotal)
{
	this->dni = dni;
	this->patente = patente;
	this->cant_ElementosSeguridad = cant_ElementosSeguridad;
	this->inicio_reserva = inicio_reserva;
	inicio_reserva->verificar_fecha();
	this->fin_reserva = fin_reserva;
	fin_reserva->verificar_fecha();
	this->montoTotal = montoTotal;
}

cAlquiler::~cAlquiler()
{
	//eliminar lista si es q la creo aca! ¡¡¡OK!!!
}

void cAlquiler::Imprimir()
{
	cout << "\n Cliente: " << dni << "\n Vehiculo: " << patente
		<< "\n Elementos de seguridad: " << cant_ElementosSeguridad
		<< "\n Fecha de inicio de alquiler: " << inicio_reserva->fechaToString()
		<< "\n Fecha de fin de alquiler: " << fin_reserva->fechaToString()
		<< "\n Monto total: " << montoTotal << endl;
}

//void cAlquiler::registrar_alquiler(int patente)
//{
//	    va en la clase lista-alquiler  ----->  lista_alquileres->
//      habria que agregar uno a la lista
//      actualizar la fecha de inicio
//      verificar que no este alquilado ese vehiculo
//      colmpara fechas y ademas tienen que estar circulando porque 
//      si esta en mantenimiento no se puede alquilar
//}
