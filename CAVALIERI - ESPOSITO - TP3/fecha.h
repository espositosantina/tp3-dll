#pragma once
#include <ctime>
#include <string>
using namespace std;


class fecha
{
	unsigned int dia;
	unsigned int mes; 
	unsigned int anio;
public: 
	fecha(unsigned int dia, unsigned int mes, unsigned int anio);

	//si pide actualizar actual usamos localtime y lo guardamos en las variables
	void actualizar_fecha_a_hoy();
	void verificar_fecha();

	string fechaToString();
};

