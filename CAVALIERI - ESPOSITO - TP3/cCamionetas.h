#pragma once
#include "cVehiculos.h"
#include "funciones.h"
class cCamionetas :
    public cVehiculos
{
   /* Las camionetas pueden alquilar sillas de seguridad para niños y / o portaequipaje
        adicional.*/
    int cantSillaSeguridad;
    int cantPortaequipaje;
    float precioDia;    
public:
    cCamionetas(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento,int cantSillaSeguridad, int cantPortaequipaje, float precioDia);
    ~cCamionetas();
    void imprimir();
    float CalcularTarifa();
    void PasosMantenimiento();


};
