#pragma once
//#include "cAlquiler.h"
#include "Lista.h"

#define NUM_TAM 10

class cVehiculos;
class cAlquiler;
class fecha;
class cAutos;
class cCamionetas;
class cTrafics;
class cMotos;

class cListaAlquileres: public Lista<cAlquiler>
{

public:
	cListaAlquileres(unsigned int TAM = NUM_TAM);
	~cListaAlquileres();
	
	float calcularGananciaTotal();
	bool chequear_si_se_puede_alquilar(cVehiculos* v);
	void registrar_alquiler(int dni, cVehiculos* vehiculo, int cant_ElementosSeguridad, fecha* inicio_reserva, fecha* fin_reserva);


	float GananciaTotalPorAuto();
	void listarPorMoto();
	float GananciaTotalPorMoto();
	void listarPorCamioneta();
	float GananciaTotalPorCamioneta();
	void listarPorTrafics();
	float GananciaTotalPorTrafics();
	void listarPorAuto();


};
