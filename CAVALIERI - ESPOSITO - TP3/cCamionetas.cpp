#include "pch.h"
#include "cCamionetas.h"
#include "funciones.h"
#include "fecha.h"

cCamionetas::cCamionetas(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento, int cantSillaSeguridad, int cantPortaequipaje, float precioDia) :cVehiculos(capacidad_pasajeros, chasis, color, patente, poliza, tarifaBase, ultimo_mantenimiento)
{
    this->cantSillaSeguridad = cantSillaSeguridad;
    this->cantPortaequipaje = cantPortaequipaje;
    this->precioDia = precioDia;
}

cCamionetas::~cCamionetas()
{
}

void cCamionetas::Imprimir()
{
   cVehiculos::Imprimir();
   cout << "\n Cantidad de sillas de seguridad: " << cantSillaSeguridad << "\n Cantidad de portaequipajes: " << cantPortaequipaje << "\n Tarifa Total: " << CalcularTarifa() << endl;
}

float cCamionetas::CalcularTarifa()
{
	int extras = cantSillaSeguridad * 10 + cantPortaequipaje *10; //cada extra vale $10 
    float precioCamioneta = precioDia + extras;
    return (tarifaBase + precioCamioneta);
}

void cCamionetas::PasosMantenimiento()
{
    cVehiculos::PasosMantenimiento();
    cout << "1)Limpiar camioneta" << endl << "2)Cambiar ruedas" << endl;
    ultimo_mantenimiento->actualizar_fecha_a_hoy();
}
