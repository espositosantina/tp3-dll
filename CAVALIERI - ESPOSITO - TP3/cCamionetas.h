#pragma once
#include "cVehiculos.h"
#include "funciones.h"
class fecha;
class cCamionetas :
    public cVehiculos
{
   /* Las camionetas pueden alquilar sillas de seguridad para niños y / o portaequipaje
        adicional.*/
    int cantSillaSeguridad;
    int cantPortaequipaje;
    float precioDia;    
public:
    cCamionetas(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento, bool esta_circulando, int cantSillaSeguridad, int cantPortaequipaje, float precioDia);
    ~cCamionetas();
    void Imprimir();
    string To_string();
    float CalcularTarifa();
    void PasosMantenimientoCamionetas();
    void set_circulacion(bool circ);
    bool get_circulacion();
    int getPatente();
};
