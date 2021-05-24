#include "pch.h"
#include "cClientes.h"


cClientes::cClientes(const int dni) :dni(dni) {}
cClientes::~cClientes() {}

bool cClientes::operator==(const cClientes& b) const
{
	if (this->dni == b.dni)
		return true;
	else
		return false;
}

string cClientes::getClave() 
{
	return to_string(dni);
}

void cClientes::Imprimir()
{
	cout << this->Cliente_To_string() << endl;
}

string cClientes::Cliente_To_string()
{
	return "\n DNI cliente: " + to_string(dni);
}
