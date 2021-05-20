#pragma once
#define NMAX 10
#include <string>
#include <ostream>
using namespace std;


template<class T>
class Lista
{

protected:
	T** vector;
	unsigned int CA, TAM;
	bool EliminarContenido;

	void Redimensionalizar();
public:
	virtual Lista(unsigned int TAM = NMAX, bool EliminarContenido = true);
	virtual ~Lista();

	bool AgregarItem(T* item);

	T* Quitar(string clave);
	T* Quitar(T* item);
	T* QuitarenPos(unsigned int pos);

	void Eliminar(string clave);
	void Eliminar(T* item);
	void Eliminar(unsigned int pos);

	void Listar();

	template<class C>
	T* BuscarItem(C clave);

	T* BuscarItem(T* item);
	T* getItem(unsigned int pos);
	
	//-------SOBRECARGAS-------
	T* operator[](unsigned int pos);
	bool operator+(T* item);
	//-------------------------

	unsigned int getItemPos(string clave);
	unsigned int getItemPos(T* item);

	unsigned int getCA();
	unsigned int getTAM();
};

