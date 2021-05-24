#include "pch.h"
#include <iostream>
#include "cListaAlquileres.h"
#include "cAlquiler.h"
#include "Lista.h"
#include "cVehiculos.h"
#include "fecha.h"
#include "cAutos.h"
#include "cCamionetas.h"
#include "cMotos.h"
#include "cTrafics.h"


cListaAlquileres::cListaAlquileres(unsigned int TAM): Lista<cAlquiler>(TAM)
{
	
}

cListaAlquileres::~cListaAlquileres()
{
}


float cListaAlquileres::calcularGananciaTotal()
{
   float gananciaTotal = 0;
   for(int i=0; i<CA; i++)
   {
      if(vector[i] != NULL)
		  gananciaTotal += vector[i]->montoTotal;
   }
   return gananciaTotal;
}

bool cListaAlquileres::chequear_si_se_puede_alquilar(cVehiculos* v)
{
	//devuelve true si se puede
    //verificar que no este alquilado ese vehiculo
    //colmpara fechas y ademas tienen que estar circulando porque 
    //si esta en mantenimiento no se puede alquilar

	int inicioReserva = 0;
	int finReserva = 0;

	if (v->get_circulacion() == true) {

		for (int i = 0; i < CA; i++) {
			if (vector[i]->vehiculo == v) 
			{ //pasamos todo a dias
				inicioReserva = vector[i]->inicio_reserva->getDia() + (vector[i]->inicio_reserva->getMes()) * 30 + (vector[i]->inicio_reserva->getAnio()) * 365;
				finReserva = vector[i]->fin_reserva->getDia() +(vector[i]->fin_reserva->getMes()) * 30 + (vector[i]->fin_reserva->getAnio()) * 365;

				for (int k = 0; k < CA; k++) {
					int inicioCOMPARO = 0;
					int finCOMPARO = 0;
					inicioCOMPARO = vector[k]->inicio_reserva->getDia() + (vector[k]->inicio_reserva->getMes()) * 30 + (vector[k]->inicio_reserva->getAnio()) * 365;
					finCOMPARO = vector[k]->fin_reserva->getDia() + (vector[k]->fin_reserva->getMes()) * 30 + (vector[k]->fin_reserva->getAnio()) * 365;

					if ((inicioCOMPARO <= finReserva) && (finCOMPARO >= inicioReserva))
					{
						return false;
					}
					else {
						return true;
					}
				}
			}
		}
	
	}
}

void cListaAlquileres::registrar_alquiler(int dni, cVehiculos* vehiculo, int cant_ElementosSeguridad, fecha* inicio_reserva, fecha* fin_reserva)
{
	//buscar vehiculo
	if (chequear_si_se_puede_alquilar(vehiculo) == true)
	{
		// agrego item a la lista de alquileres
		this->operator+(new cAlquiler(dni, vehiculo, cant_ElementosSeguridad, inicio_reserva, fin_reserva));

	}
}

float cListaAlquileres::GananciaTotalPorAuto()
{
	//calcular ganancia total de los AUTOS
	float acum = 0;
	for (int i = 0; i < CA; i++)
	{
		if (vector[i] != NULL)
		{
			cAutos* a = dynamic_cast<cAutos*>(vector[i]->vehiculo);
			if (a != NULL)
				acum += a->CalcularTarifa();
		}
	}
	return acum;
}

void cListaAlquileres::listarPorAuto()
{
	//calcular ganancia total de los AUTOS
	for (int i = 0; i < CA; i++)
	{
		if (vector[i] != NULL)
		{
			cAutos* a = dynamic_cast<cAutos*>(vector[i]->vehiculo);
			if (a != NULL)
				cout << a << endl;  //a chequear
		}
	}
}

float cListaAlquileres::GananciaTotalPorMoto()
{
	//calcular ganancia total de las MOTOS
	float acum = 0;
	for (int i = 0; i < CA; i++)
	{
		if (vector[i] != NULL)
		{
			cMotos* m = dynamic_cast<cMotos*>(vector[i]->vehiculo);
			if (m != NULL)
				acum += m->CalcularTarifa();
		}
	}
	return acum;
}
void cListaAlquileres::listarPorMoto()
{
	//calcular ganancia total de las MOTOS
	for (int i = 0; i < CA; i++)
	{
		if (vector[i] != NULL)
		{
			cMotos* m = dynamic_cast<cMotos*>(vector[i]->vehiculo);
			if (m != NULL)
				cout << m << endl;  //a chequear
		}
	}
}

void cListaAlquileres::listarPorCamioneta()
{
	//calcular ganancia total de las CAMIONETAS
	for (int i = 0; i < CA; i++)
	{
		if (vector[i] != NULL)
		{
			cCamionetas* c = dynamic_cast<cCamionetas*>(vector[i]->vehiculo);
			if (c != NULL)
				cout << c << endl;  //a chequear
		}
	}
}

float cListaAlquileres::GananciaTotalPorCamioneta()
{
	//calcular ganancia total de las CAMIONETAS
	float acum = 0;
	for (int i = 0; i < CA; i++)
	{
		if (vector[i] != NULL)
		{
			cCamionetas* c = dynamic_cast<cCamionetas*>(vector[i]->vehiculo);
			if (c != NULL)
				acum += c->CalcularTarifa();
		}
	}
	return acum;
}


void cListaAlquileres::listarPorTrafics()
{
	//calcular ganancia total de los TRAFICS
	for (int i = 0; i < CA; i++)
	{
		if (vector[i] != NULL)
		{
			cTrafics* t = dynamic_cast<cTrafics*>(vector[i]->vehiculo);
			if (t != NULL)
				cout << t << endl;  //a chequear
		}
	}
}

float cListaAlquileres::GananciaTotalPorTrafics()
{
	//calcular ganancia total de los TRAFICS
	float acum = 0;
	for (int i = 0; i < CA; i++)
	{
		if (vector[i] != NULL)
		{
			cTrafics* t = dynamic_cast<cTrafics*>(vector[i]->vehiculo);
			if (t != NULL)
				acum += t->CalcularTarifa();
		}
	}
	return acum;
}