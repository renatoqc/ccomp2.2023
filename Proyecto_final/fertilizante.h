#include <iostream>
#include "Articulo.h"
using namespace std;

class Fertilizante {
private:
    string nombre;
    float precio;
    int cantidad;
    string tipo;
public:
    Fertilizante(string n, float p, int c, string l) {
        nombre = n;
        precio = p;
        cantidad = c;
        tipo = l;
    }
    string getNombre() {
        return nombre;
    }
    float getPrecio() {
        return precio;
    }
    int getCantidad() {
        return cantidad;
    }
    string getTipo() {
        return tipo;
    }
    void setCantidad(int c) {
        cantidad = c;
    }
};
class fertilizante : public Articulo {
    string tipo;

public:
    Planta(const string& nombre, float precio, int cantidad, const string& tipo)
        : Articulo(nombre, precio, cantidad), tipo(tipo) {}

 
    string getTipo() const { return tipo; }
};


