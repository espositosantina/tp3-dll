#pragma once
#include <iostream>
#include "cVehiculos.h"
#include "funciones.h"

class fecha;

class cAutos :
    public cVehiculos
{
   /* Los autos pueden alquilar sillas de seguridad para ni�os.*/
    int cantSillaSeguridad;
    float precioDia;
public:
    cAutos(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento, int cantSillaSeguridad, float precioDia);
    ~cAutos();
    void Imprimir();
    float CalcularTarifa();
    void PasosMantenimiento();
};

