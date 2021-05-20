#pragma once
class cClientes
{
	friend class cAlquiler;
	const int dni;

public:
	cClientes(const int dni); 
	~cClientes();
};

