#pragma once
#include <iostream>
#include "cVehiculos.h"
#include "funciones.h"
class fecha;
class cTrafics :
    public cVehiculos
{
   /* Las trafic pueden alquilar sillas de seguridad para niños y / o asientos rebatibles que
        pueden instalarse en el pasillo a forma de asiento auxiliar.*/
    int cantSillaSeguridad;
    int cantAsientosRebatibles;
    float precioDia;
public:
    cTrafics(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento, bool esta_circulando,int cantSillaSeguridad, int cantAsientosRebatibles, float precioDia);
    ~cTrafics();
    void Imprimir();
    string To_string();
    float CalcularTarifa();
    void PasosMantenimiento();
    void set_circulacion(bool circ);
    bool get_circulacion();
};

