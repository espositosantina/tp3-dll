#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
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
#define tam 10

using namespace std;

/*
preguntas pa juli:

AGUANTE TAYLOT SWIFTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT
CARDIGAAAAAANNNNNNNNNNNNNNN

errores de compilacion de las listas
las estamos declarando bien?

vehiculos:
donde declaramos operator <<

empresas :
AdquirirNuevosVehiculos   -> usamos operator o agregar item?
RealizarMantenimiento     ->  usamos dynamic cast o no..?

lista Alquileres:
registrar_alquiler       -> como lo agregamos a la lista con operator

listarPorTipoVehiculo  -> Se debe poder listar todos los alquileres por tipo de vehiculo y calcular la ganancia total de eso
                    



cliente:
se tiene que imprimir
con operTOR <<   ?

*/
//¡¡¡NO OLVIDARNOS DE REDIMENSIONAR CUANDO LLAMAMOS A AGREGAR ITEM!!!

int main()
{
    
	fecha fecha1 = fecha(15, 11, 2020);
	fecha fecha2 = fecha(14, 11, 2020);
	fecha fecha3 = fecha(13, 11, 2020);
	fecha fecha4 = fecha(12, 11, 2020);
	fecha incio = fecha(16, 11, 2020);
	fecha fin = fecha(25, 11, 2020);
	

	cListaAlquileres* listaA = new cListaAlquileres(tam);
	Lista<cClientes> listaC(tam, false);
	
	listaC.AgregarItem(new cClientes(1111)); 

	Lista<cVehiculos> listaV(10, false);
	listaV.AgregarItem(new cAutos(1, 11, Rosa, 111, 1111, 10, &fecha1,true, 1, 100));
	listaV.AgregarItem(new cMotos(2, 22, Azul, 222, 2222, 5.5, &fecha2, true,2, 50.5));
	listaV.AgregarItem(new cCamionetas(3, 33, Verde, 333, 3333, 20.5, &fecha3,false, 1, 1, 200.5));
	listaV.AgregarItem(new cTrafics(4, 44, Blanco, 444, 4444, 30.5, &fecha4, false, 1, 1, 300.5));

	cEmpresa* empresa = new cEmpresa(&listaV, &listaC, listaA);

	//---------------------IMPLEMENTAMOS METODOS---------------------

	for (int i = 0; i < 4; i++)
	{
		listaV[i]->Imprimir();
		empresa->AdquirirNuevosVehiculos(listaV[i]);
	}

	empresa->Alquilar(111, listaV[0], 3, &incio, &fin); 
	empresa->RealizarMantenimiento(333);
	empresa->Alquilar(333, listaV[2], 5, &incio, &fin); //no deberia poder alquilar porque se esta realizando el mantenimiento
	empresa->ComenzarCirculacion(333);
	empresa->Alquilar(333, listaV[2], 5, &incio, &fin);

	empresa->Imprimir();


	//-----------------TERMINAMOS DE IMPLEMENTAR METODOS-----------------

	listaC.SetEliminarContenido(true);
	listaV.SetEliminarContenido(true);
	listaA->SetEliminarContenido(true);
	//chequear!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! si se eliminarian

	delete empresa;


	system("pause");
	return 0;
}