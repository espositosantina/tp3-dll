#include "pch.h"
#include "cTrafics.h"
#include "funciones.h"
#include "fecha.h"


cTrafics::cTrafics(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento, int cantSillaSeguridad, int cantAsientosRebatibles, float precioDia) :cVehiculos(capacidad_pasajeros, chasis, color, patente, poliza, tarifaBase, ultimo_mantenimiento)
{
    this->cantSillaSeguridad = cantSillaSeguridad;
    this->cantAsientosRebatibles = cantAsientosRebatibles;
    this->precioDia = precioDia;
}
cTrafics::~cTrafics() {}

void cTrafics::Imprimir()
{
    string info = To_string();
    cout << info << endl;
}


string cTrafics::To_string()
{
    string infooo = cVehiculos::To_string();
    string info = infooo + "\nCantidad de sillas de seguridad: " + to_string(cantSillaSeguridad) + "\n Cantidad de asientos rebatibles: " + to_string(cantAsientosRebatibles) + "\n Tarifa Total: " + to_string(CalcularTarifa());
    return info;
}

float cTrafics::CalcularTarifa()
{
    int extras = cantSillaSeguridad * 10 + cantAsientosRebatibles *10; //cada extra vale $10 
    float precioTrafic = precioDia + extras;
    return (tarifaBase + precioTrafic);
}

void cTrafics::PasosMantenimiento()
{
    cVehiculos::PasosMantenimiento();
     cout << "1)Limpiar trafic" << endl << "2)Cambiar ruedas" << endl;
     ultimo_mantenimiento->actualizar_fecha_a_hoy();
}
