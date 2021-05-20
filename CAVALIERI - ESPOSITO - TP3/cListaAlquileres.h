#pragma once
//#include "cAlquiler.h"
#include "Lista.h"

#define NUM_TAM 10

class cVehiculos;
class cAlquiler;

class cListaAlquileres: public Lista<cAlquiler>
{

public:
	cListaAlquileres(unsigned int TAM = NUM_TAM);
	~cListaAlquileres();
	void listarPorTipoVehiculo();
	float calcularGananciaTotal();
	bool chequearVehiculoEnAlquiler(cVehiculos* v);
	void registrar_alquiler(int patente);
	

//void cAlquiler::registrar_alquiler(int patente)
//{
//	    va en la clase lista-alquiler  ----->  lista_alquileres->
//      habria que agregar uno a la lista
//      actualizar la fecha de inicio
//      verificar que no este alquilado ese vehiculo
//      colmpara fechas y ademas tienen que estar circulando porque 
//      si esta en mantenimiento no se puede alquilar
//}
};
