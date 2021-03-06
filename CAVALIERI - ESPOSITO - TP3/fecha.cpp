#include "pch.h"
#include "fecha.h"
#define _CRT_SECURE_NO_WARNINGS
	
fecha::fecha(unsigned int dia, unsigned int mes, unsigned int anio)
{
	this->dia = dia;
	this->mes = mes;
	this->anio = anio;
	verificar_fecha();
}
fecha::~fecha()
{
}
void fecha::verificar_fecha()
{
	if (dia > 31)
		dia = 31;

	if (mes > 12)
		mes = 12;

	if (anio > 2021)
		anio = 2021;
}

int fecha::getDia()
{
	return dia;
}

int fecha::getMes()
{
	return mes;
}

int fecha::getAnio()
{
	return anio;
}

string fecha::fechaToString()
{
	string fecha_str = "";

	if (dia < 10)
		fecha_str += "0" + to_string(dia);
	else
		fecha_str += to_string(dia);
	fecha_str += "/";

	if (mes < 10)
		fecha_str += "0" + to_string(mes);
	else
		fecha_str += to_string(mes);
	fecha_str += "/";

	fecha_str += to_string(anio);
	return fecha_str;
}


void fecha::actualizar_fecha_a_hoy()
{
	time_t fecha_actual = time(0);
	tm* ltm = localtime(&fecha_actual);
	
	dia = ltm->tm_mday;
	mes = ltm->tm_mon;
	anio = ltm->tm_year;
	verificar_fecha();
}