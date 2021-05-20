#include <iostream>
#include "cListaAlquileres.h"
#include "cAlquiler.h"
#include "Lista.h"
#include "cVehiculos.h"


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
	*/ //EU PERO A RE CONTRA CHEQUEAR
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

bool cListaAlquileres::chequearVehiculoEnAlquiler(cVehiculos* v)
{
 //     verificar que no este alquilado ese vehiculo
//      colmpara fechas y ademas tienen que estar circulando porque 
//      si esta en mantenimiento no se puede alquilar

	if(vector[i]->vehiculo->getclave comparas con v->getclave ==)
		return true;
}

void cListaAlquileres::registrar_alquiler(int patente) 
{

	if (chequearVehiculoEnAlquiler() == true)
	{
		// agrego item a la lista de alquileres

		AgregarItem()
	}
}