#pragma once
#include <iostream>
#include <string>
#include "cVehiculos.h"
#include "funciones.h"
using namespace std;

class fecha;


class cAutos :
    public cVehiculos
{
   /* Los autos pueden alquilar sillas de seguridad para niños.*/
    int cantSillaSeguridad;
    float precioDia;
public:
    cAutos(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento, bool esta_circulando, int cantSillaSeguridad, float precioDia);
    ~cAutos();
    void Imprimir();
    string To_string();
    float CalcularTarifa();
    void PasosMantenimiento();
    void set_circulacion(bool circ);
    bool get_circulacion();
};

//ostream& operator<< (ostream& salida, string& info);
//
//ostream& operator<< (ostream& salida, cVehiculos& V)
//{
//    salida << V.To_string();
//    return salida;
//}