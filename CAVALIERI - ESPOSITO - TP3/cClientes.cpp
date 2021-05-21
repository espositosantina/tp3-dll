#include "pch.h"
#include "cClientes.h"


cClientes::cClientes(const int dni) :dni(dni) {}
cClientes::~cClientes() {}

void cClientes::Imprimir()
{
	cout << this->Cliente_To_string() << endl;
}

string cClientes::Cliente_To_string()
{
	return "\n DNI cliente: " + to_string(dni);
}
