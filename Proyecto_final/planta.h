#include <iostream>
using namespace std;

// DefiniciÃ³n de la clase Planta
class Planta {
private:
    string nombre;
    float precio;
    int cantidad;
    string tipo;
public:
    Planta(string n, float p, int c, string l) {
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