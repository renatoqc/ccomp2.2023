#include <iostream>
using namespace std;

// DefiniciÃ³n de la clase Semilla
class Semilla {
private:
    string nombre;
    float precio;
    int cantidad;
    string tipo;
public:
    Semilla(string n, float p, int c, string l) {
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
class semilla : public Articulo {
    string tipo;

public:
    Planta(const string& nombre, float precio, int cantidad, const string& tipo)
        : Articulo(nombre, precio, cantidad), tipo(tipo) {}

    // Agrega un getter para el tipo
    string getTipo() const { return tipo; }
};