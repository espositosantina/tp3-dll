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

void cListaAlquileres::listarPorTipoVehiculo()
{
	/*Se debe poder listar todos los alquileres por tipo de vehiculo y calcular la ganancia total de
		eso.*/

	for (int i = 0; i < CA; i++)
	{
		if (vector[i] != NULL)
		{
			//divido por clase
			if (dynamic_cast<cAutos*>(vector[i]))
			{
			
			}
			if (dynamic_cast<cMotos*>(vector[i]))
			{
				
			}
			if (dynamic_cast<cCamionetas*>(vector[i]))
			{
				
			}
			if (dynamic_cast<cTrafics*>(vector[i]))
			{
				
			}
		}
	}
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

 //     verificar que no este alquilado ese vehiculo
//      colmpara fechas y ademas tienen que estar circulando porque 
//      si esta en mantenimiento no se puede alquilar



	int inicioReserva = 0;
	int finReserva = 0;

	if (v->get_circulacion() == true) {

		for (int i = 0; i < CA; i++) {
			if (vector[i]->vehiculo == v) { //pasamos todo a dias
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
		AgregarItem(new cAlquiler(dni, vehiculo, cant_ElementosSeguridad, inicio_reserva,fin_reserva));

		//+(v);    ??? send help
		//agregar con sobrecarga
	}
}