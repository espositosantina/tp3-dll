#include "pch.h"
#include "cMotos.h"
#include "funciones.h"
#include "cVehiculos.h"
#include "fecha.h"

cMotos::cMotos(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento, bool esta_circulando, int cantCascos, float precioDia):cVehiculos(capacidad_pasajeros, chasis, color, patente, poliza, tarifaBase, ultimo_mantenimiento, esta_circulando)
{
    this->cantCascos = cantCascos;
    this->precioDia = precioDia;
}

cMotos::~cMotos() {}

void cMotos::Imprimir()
{
    string info = To_string();
    cout << info << endl;
}


string cMotos::To_string()
{
    string infooo = cVehiculos::To_string();
    string info = infooo + "\n Cantidad de cascos: " + to_string(cantCascos) + "\n Tarifa Total: " + to_string(CalcularTarifa());
    return info;
}

float cMotos::CalcularTarifa()
{
    int extras = cantCascos * 10; //cada casco vale $10 
    float precioMoto = precioDia + extras;
    return (tarifaBase + precioMoto);
}

void cMotos::PasosMantenimiento()
{
    cVehiculos::PasosMantenimiento();
     cout << "1)Limpiar moto y cascos" << endl << "2)Cambiar ruedas" << endl;
     ultimo_mantenimiento->actualizar_fecha_a_hoy();
}

void cMotos::set_circulacion(bool circ)
{
    esta_circulando = circ;
}
bool cMotos::get_circulacion()
{
    return esta_circulando;
}