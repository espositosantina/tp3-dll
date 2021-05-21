#include <iostream>
#include "cListaAlquileres.h"
#include "cAlquiler.h"
#include "Lista.h"
#include "cVehiculos.h"
#include "fecha.h"


cListaAlquileres::cListaAlquileres(unsigned int TAM): Lista<cAlquiler>(TAM)
{
	
}

cListaAlquileres::~cListaAlquileres()
{
}

void cListaAlquileres::listarPorTipoVehiculo()
{
	/* 
	* 
	A *abc[3]; 
	B* B_aux; 
	B_aux = dynamic_cast<B*>(abc[1]); //B PUEDE ACCEDER A LOS ATRIBUTOS DE A
	B_aux->b = 10;
	
	
	int i = 0;
	while (!v[i])
	{
,		cListaAlquileres* cListaAlquileres_aux;
		cListaAlquileres_aux = dynamic_cast<cListaAlquileres*>(v[i]);
		cListaAlquileres_aux->
		i++;
	}
	*/ //EU PERO A RE CONTRA CHEQUEAR   ¡¡OK!!
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

void cListaAlquileres::registrar_alquiler(cVehiculos* v) 
{
	//buscar vehiculo
	if (chequear_si_se_puede_alquilar(v) == true)
	{
		// agrego item a la lista de alquileres
		AgregarItem(v);

		//+(v);    ??? send help
		//agregar con sobrecarga
	}
}