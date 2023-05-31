#include <iostream>
#include <string>
#include <vector>
#include "planta.h"
#include "vendedor.h"
#include "semilla.h"
#include "maceta.h"
#include "plagas.h"
#include "fertilizante.h"
using namespace std;

class Articulo {
protected:
    string nombre;
    float precio;
    int cantidad;

public:
    Articulo(const string& nombre, float precio, int cantidad)
        : nombre(nombre), precio(precio), cantidad(cantidad) {}

    // Agrega getters y setters para los miembros
    string getNombre() const { return nombre; }
    float getPrecio() const { return precio; }
    int getCantidad() const { return cantidad; }
    void setCantidad(int cantidad) { this->cantidad = cantidad; }
};
