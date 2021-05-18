#include "pch.h"
#include "cMotos.h"
#include "funciones.h"
#include "cVehiculos.h"
#include "fecha.h"

cMotos::cMotos(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento, int cantCascos, float precioDia):cVehiculos(capacidad_pasajeros, chasis, color, patente, poliza, tarifaBase, ultimo_mantenimiento)
{
    this->cantCascos = cantCascos;
    this->precioDia = precioDia;
}

cMotos::~cMotos() {}

void cMotos::Imprimir()
{
    cVehiculos::Imprimir();
    cout << "\n Cantidad de cascos: " << cantCascos << "\n Tarifa Total: " << CalcularTarifa() << endl;
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
