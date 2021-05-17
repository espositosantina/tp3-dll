#pragma once
#include <iostream>
#include "cVehiculos.h"
#include "funciones.h"

class cTrafics :
    public cVehiculos
{
   /* Las trafic pueden alquilar sillas de seguridad para niños y / o asientos rebatibles que
        pueden instalarse en el pasillo a forma de asiento auxiliar.*/
    int cantSillaSeguridad;
    int cantAsientosRebatibles;
    float precioDia;
public:
    cTrafics(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento,int cantSillaSeguridad, int cantAsientosRebatibles, float precioDia);
    ~cTrafics();
    void imprimir();
    float CalcularTarifa();
    void PasosMantenimiento();

};

