#include <iostream>
#include "pch.h"
#include "cEmpresa.h"
#include "cAlquiler.h"
#include "cVehiculos.h"
#include "cClientes.h"
#include "Lista.h"
#include "cAutos.h"
#include "cCamionetas.h"
#include "cMotos.h"
#include "cTrafics.h"
#include "cListaAlquileres.h"

cEmpresa::cEmpresa(Lista<cVehiculos>* lista_vehiculos, Lista<cClientes>* lista_clientes, cListaAlquileres* lista_alquileres)
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
	if (vehiculo != NULL)
	{
		lista_vehiculos->AgregarItem(vehiculo);
		//lista_vehiculos->operator+(vehiculo); // A PREGUNTARRRRRRRRRRRRRRR
	}
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

//void cEmpresa::RealizarMantenimiento(int patente)
//{
//	//si esta en mantenimiento => no esta circulando, es decir, bool esta_circulando = false
//	if (lista_vehiculos->BuscarItem(patente) != NULL)
//	{
//		   lista_vehiculos->BuscarItem(patente)->PasosMantenimiento();
//		   lista_vehiculos->BuscarItem(patente)->set_circulacion(false);
//	}
//}

void cEmpresa::RealizarMantenimiento(int patente)
{
	//si esta en mantenimiento => no esta circulando, es decir, bool esta_circulando = false

	// cVehiculos* a = new cAutos;
	// cVehiculos* m = new cMotos;
	// cVehiculos* c = new cCamionetas;
	//cVehiculos* t = new cTrafics;


	for (int i = 0; i < lista_vehiculos->getCA(); i++)
	{
		if (lista_vehiculos->BuscarItem(patente) != NULL)
		{
			if (dynamic_cast<cAutos*>(&lista_vehiculos[i]))
			{
				cAutos* a = dynamic_cast<cAutos*>(&lista_vehiculos[i]);
				a->PasosMantenimientoAuto();
			}
			if (dynamic_cast<cMotos*>(&lista_vehiculos[i]))
			{
				cMotos* m = dynamic_cast<cMotos*>(&lista_vehiculos[i]);
				m->PasosMantenimientoMotos();
			}
			if (dynamic_cast<cCamionetas*>(&lista_vehiculos[i]))
			{
				cCamionetas* c = dynamic_cast<cCamionetas*>(&lista_vehiculos[i]);
				c->PasosMantenimientoCamionetas();
			}
			if (dynamic_cast<cTrafics*>(&lista_vehiculos[i]))
			{
				cTrafics* t = dynamic_cast<cTrafics*>(&lista_vehiculos[i]);
				t->PasosMantenimientoTrafics();
			}
		}
	}
}


void cEmpresa::Alquilar(int patente)
{

	lista_alquileres->registrar_alquiler(lista_vehiculos->BuscarItem(patente));

}
