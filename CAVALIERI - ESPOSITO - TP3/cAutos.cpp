#include "pch.h"
#include "cAutos.h"
#include "funciones.h"
#include "fecha.h"

cAutos::cAutos(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento, int cantSillaSeguridad, float precioDia) :cVehiculos(capacidad_pasajeros, chasis, color, patente, poliza, tarifaBase, ultimo_mantenimiento)
{
    this->cantSillaSeguridad = cantSillaSeguridad;
    this->precioDia = precioDia;
}

cAutos::~cAutos()
{
}

void cAutos::Imprimir()
{
    cVehiculos::Imprimir();
    cout << "\n Cantidad de sillas de seguridad: " << cantSillaSeguridad << "\n Tarifa Total: " << CalcularTarifa() << endl;
}

float cAutos::CalcularTarifa()
{
    int extras = cantSillaSeguridad * 10; //cada casco vale $10 
    float precioAuto = precioDia + extras;
    return (tarifaBase + precioAuto);
}

void cAutos::PasosMantenimiento()
{
    cVehiculos::PasosMantenimiento();
    cout << "1)Limpiar auto" << endl << "2)Cambiar ruedas" << endl;
    ultimo_mantenimiento->actualizar_fecha_a_hoy();
 
}

