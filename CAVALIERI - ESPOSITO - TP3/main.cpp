#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>
#include "cVehiculos.h"
#include "cAutos.h"
#include "cCamionetas.h"
#include "cMotos.h"
#include "cTrafics.h"
#include "fecha.h"
#include "funciones.h"
#include "cEmpresa.h"
#include "cAlquiler.h"
#include "cClientes.h"
#include "Lista.h"
#include "cListaAlquileres.h"


using namespace std;


int main()
{
	fecha fecha1 = fecha(1, 1, 1);

	/*cAlquiler* alquiler();
	cListaAlquileres* lista_alquileres = ;
	lista_alquileres->AgregarItem(alquiler());*/


	Lista<cAlquiler> listaA(10, false);
	Lista<cClientes> listaC(10, false);
	
	listaC.AgregarItem(new cClientes(1111));

	Lista<cVehiculos> listaV(10, false);
	listaV.AgregarItem(new cAutos(1, 11, Rosa, 111, 1111, 10, &fecha1,true, 1, 100));
	listaV.AgregarItem(new cMotos(2, 22, Azul, 222, 2222, 5.5, 14 / 11 / 2020, true,2, 50.5));
	listaV.AgregarItem(new cCamionetas(3, 33, Verde, 333, 3333, 20.5, 13 / 12 / 2020,false, 1, 1, 200.5));
	listaV.AgregarItem(new cTrafics(4, 44, Blanco, 444, 4444, 30.5, 12 / 12 / 2020, false, 1, 1, 300.5));

	cEmpresa* empresa = new cEmpresa(&listaV, &listaC, &listaA);

	//---------------------IMPLEMENTAMOS METODOS---------------------

	for (int i = 0; i < 4; i++)
	{
		listaV[i]->Imprimir();
		empresa->AdquirirNuevosVehiculos(listaV[i]);
		
	}
	empresa->RetirarCirculacion(111);
	listaV[0]->Imprimir();

	empresa->RealizarMantenimiento(333);
	empresa->ComenzarCirculacion(333);

	//en realidad, comenzar y retirar circulacion deberian llamarse dentro de la funcion alquilar


	//-----------------TERMINAMOS DE IMPLEMENTAR METODOS-----------------

	for (int i = 0; i < 4; i++)
	{
		delete listaV[i];
	}
	
	delete empresa;
	delete listaC[0];


	system("pause");
	return 0;
}