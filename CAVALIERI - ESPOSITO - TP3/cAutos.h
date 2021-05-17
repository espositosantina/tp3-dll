#pragma once
#include <iostream>
#include "cVehiculos.h"
#include "funciones.h"
class cAutos :
    public cVehiculos
{
   /* Los autos pueden alquilar sillas de seguridad para niños.*/
    int cantSillaSeguridad;
    float precioDia;
public:
    cAutos(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento, int cantSillaSeguridad, float precioDia);
    ~cAutos();
    void imprimir();
    float CalcularTarifa();
    void PasosMantenimiento();

};

