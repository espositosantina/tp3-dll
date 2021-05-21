#pragma once
#include <iostream>
#include <string>
#include "funciones.h"
using namespace std;
class cVehiculos;
class fecha;

class cMotos : public cVehiculos
{
    //Las motocicletas pueden añadir el alquiler de uno o dos cascos.
    int cantCascos;
    float precioDia;
public:
    cMotos(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento, bool esta_circulando, int cantCascos, float precioDia);
    ~cMotos();
    void Imprimir();
    string To_string();
    float CalcularTarifa();
    void PasosMantenimientoMotos();
    void set_circulacion(bool circ);
    bool get_circulacion();
    int getPatente();

};
