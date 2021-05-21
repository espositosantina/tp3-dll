#pragma once
#include <string>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class cClientes
{
	friend class cAlquiler;
	const int dni;

public:
	cClientes(const int dni); 
	~cClientes();

	void Imprimir();
	string	Cliente_To_string();
};

