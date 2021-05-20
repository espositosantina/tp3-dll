#include "pch.h"
#include "cEmpresa.h"
#include "cAlquiler.h"
#include "cVehiculos.h"
#include "cClientes.h"
#include "Lista.h"

cEmpresa::cEmpresa(Lista<cVehiculos>* lista_vehiculos, Lista<cClientes>* lista_clientes, Lista<cAlquiler>* lista_alquileres)
{
	this->lista_vehiculos = lista_vehiculos;
	this->lista_clientes = lista_clientes;
	this->lista_alquileres = lista_alquileres;
}

cEmpresa::~cEmpresa()
{
}

void cEmpresa::AdquirirNuevosVehiculos(cVehiculos* vehiculo)
{
	//agrego uno a la lista de vehiculos
	if(vehiculo!= NULL)
	lista_vehiculos->AgregarItem(vehiculo);
}

void cEmpresa::ComenzarCirculacion(int patente)
{
	if (lista_vehiculos->BuscarItem(patente) != NULL)
	{
		if (lista_vehiculos->BuscarItem(patente)->get_circulacion() == false)
			lista_vehiculos->BuscarItem(patente)->set_circulacion(true);
	}
}

void cEmpresa::RetirarCirculacion(int patente)
{
	if (lista_vehiculos->BuscarItem(patente)!= NULL)
	{
		if (lista_vehiculos->BuscarItem(patente)->get_circulacion() == true)
			lista_vehiculos->BuscarItem(patente)->set_circulacion(false);
	}
}

void cEmpresa::RealizarMantenimiento(int patente)
{
	//si esta en mantenimiento => no esta circulando, es decir, bool esta_circulando = false
	if (lista_vehiculos->BuscarItem(patente) != NULL)
	{
		   lista_vehiculos->BuscarItem(patente)->PasosMantenimiento();
		   lista_vehiculos->BuscarItem(patente)->set_circulacion(false);
	}
}

void cEmpresa::Alquilar(int patente)
{
	lista_vehiculos->BuscarItem(patente)->alquilar_vehiculo();
	lista_alquileres->registrar_alquiler(patente);
}
