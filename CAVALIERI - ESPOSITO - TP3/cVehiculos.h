#pragma once
#include <string>

using namespace std;

class fecha;

typedef enum {
	Rosa,
	Verde,
	Azul,
	Blanco,
	Negro
}eColor;

class cVehiculos
{
	int capacidad_pasajeros;
	int chasis;
	eColor color;
	int patente;
	int poliza;
	float precio_dia;
	fecha* ultimo_mantenimiento;

};

