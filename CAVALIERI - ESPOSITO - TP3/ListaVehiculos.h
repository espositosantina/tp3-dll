#pragma once
#include <string>
#include <iostream>
using namespace std;
class Lista;
class cVehiculos;
class cAutos;
class cMotos;
class cTrafics;
class cCamionetas;

template<class T>
class ListaVehiculos : public Lista 
{
	friend class cVehiculos;
	cAutos* auto;
	cMotos* moto;
	cTrafics* trafic;
	cCamionetas* camioneta;

public:
	void ImprimirVehiculo();
};

template<class T>
inline void ListaVehiculos<T>::ImprimirVehiculo()
{
	Lista* aux = dynamic_cast<Lista*>(ListaVehiculos[0]);
	for(int i=0;i<aux->
}
