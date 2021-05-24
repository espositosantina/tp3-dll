#include <iostream>
#include <string>
#include "stdio.h"
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
#include "fecha.h"

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

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
		//lista_vehiculos->AgregarItem(vehiculo);
		lista_vehiculos->operator+(vehiculo);
	}
}

void cEmpresa::ComenzarCirculacion(int patente)
{
	if (lista_vehiculos->BuscarItem(to_string(patente)) != NULL)
	{
		if (lista_vehiculos->BuscarItem(to_string(patente))->get_circulacion() == false)
			lista_vehiculos->BuscarItem(to_string(patente))->set_circulacion(true);
	}
}

void cEmpresa::RetirarCirculacion(int patente)
{
	if (lista_vehiculos->BuscarItem(to_string(patente))!= NULL)
	{
		if (lista_vehiculos->BuscarItem(to_string(patente))->get_circulacion() == true)
			lista_vehiculos->BuscarItem(to_string(patente))->set_circulacion(false);
	}
}

void cEmpresa::RealizarMantenimiento(int patente)
{
	//si esta en mantenimiento => no esta circulando, es decir, bool esta_circulando = false

	for (int i = 0; i < lista_vehiculos->getCA(); i++)
	{
		cAutos* a = dynamic_cast<cAutos*>(&lista_vehiculos[i]);
		cMotos * m = dynamic_cast<cMotos*>(&lista_vehiculos[i]);
		cCamionetas* c = dynamic_cast<cCamionetas*>(&lista_vehiculos[i]);
		cTrafics* t = dynamic_cast<cTrafics*>(&lista_vehiculos[i]);

		if (lista_vehiculos->BuscarItem(to_string(patente)) != NULL)
		{
			if (a != NULL)
				a->PasosMantenimientoAuto();
			if (m != NULL)
				m->PasosMantenimientoMotos();
			if (c != NULL)
				c->PasosMantenimientoCamionetas();
			if (t != NULL)
				t->PasosMantenimientoTrafics();
		}
	}
}


void cEmpresa::Imprimir()
{
	cout << "\n Lista de Alquileres de autos: " << endl;
	lista_alquileres->listarPorAuto();
	cout << "\n Lista de Alquileres de motos: " << endl;
	lista_alquileres->listarPorMoto();
	cout << "\n Lista de Alquileres de camionetas: " << endl;
	lista_alquileres->listarPorCamioneta();
	cout << "\n Lista de Alquileres de trafics: " << endl;
	lista_alquileres->listarPorTrafics();

	cout << "\n Lista de Clientes: " << endl;
	lista_clientes->Listar();
	cout << "\n Lista de Vehiculos: " << endl;
	lista_vehiculos->Listar();

}

void cEmpresa::Alquilar(int dni, cVehiculos* vehiculo, int cant_ElementosSeguridad, fecha* inicio_reserva, fecha* fin_reserva)
{//le paso todos los datos que necesita el constructor de alquiler

	lista_alquileres->registrar_alquiler(dni, vehiculo, cant_ElementosSeguridad, inicio_reserva, fin_reserva);

}
