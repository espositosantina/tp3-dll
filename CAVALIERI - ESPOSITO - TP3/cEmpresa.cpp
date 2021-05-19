#include "pch.h"
#include "cEmpresa.h"
#include "cAlquiler.h"
#include "cVehiculos.h"
#include "cClientes.h"
#include "Lista.h"

cEmpresa::cEmpresa()
{
	Lista<cVehiculos> listaV(50, false);
	Lista<cAlquiler> listaA(50, false);
	Lista<cClientes> listaC(50, false);
}

cEmpresa::~cEmpresa()
{
}

void cEmpresa::AdquirirNuevosVehiculos()
{
	//agrego uno a la lista de vehiculos
}

void cEmpresa::RetirarCirculacion()
{
	
	// o hago una variable bool para saber si esta en circulacion o no

}

void cEmpresa::RealizarMantenimiento()
{
	//variable bool para saber si esta en mantenimiento
	//tiene que ver con fecha ultimo mantenimiento!!
}
