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

int main(){

    cout << "\n-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.";
    cout << "\n:"<< " IMPORTANTE INGRESAR LA HORA EN UN SOLO NUMERO EN LA MAÑANA DEL 1-12 Y  EN LA TARDE DE 13-23"<< ":"<< endl;    
    cout << "-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-." << endl;
    cout << " "<<endl;

    cout << "Ingrese su nombre: ";
    string nom_;
    cin >> nom_;

    cout << "Ingrese su apellido: ";
    string ape_;
    cin >> ape_;

    cout << "Hora de entrada: ";
    int entra_;
    cin >> entra_;

    cout << "Hora de salida: ";
    int sali_;
    cin >> sali_;

    
    Planta plantas[15] = {
        Planta("Rosa", 20.0, 10, "Planta ornamental"),
        Planta("Margarita", 15.0, 5, "Planta ornamental"),
        Planta("Orquídea", 50.0, 3, "Planta ornamental"),
        Planta("Girasol", 18.0, 7, "Planta ornamental"),
        Planta("Crisantemo", 22.0, 4, "Planta ornamental"),
        Planta("Tulipán", 25.0, 6, "Planta ornamental"),
        Planta("Jazmín", 30.0, 2, "Planta ornamental"),
        Planta("Hortensia", 40.0, 5, "Planta ornamental"),
        Planta("Lirio", 28.0, 8, "Planta ornamental"),
        Planta("Clavel", 16.0, 9, "Planta ornamental"),
        Planta("Begonia", 12.0, 11, "Planta ornamental"),
        Planta("Geranio", 14.0, 12, "Planta ornamental"),
        Planta("Petunia", 18.0, 7, "Planta ornamental"),
        Planta("Azalea", 36.0, 2, "Planta ornamental"),
        Planta("Cactus", 10.0, 15, "Planta ornamental"),
    };

    Semilla semillas[5] = {
        Semilla("Semillas de Margarita", 2.0, 5, "Semilla"),
        Semilla("Semillas de Orquídea", 5.0, 14, "Semilla"),
        Semilla("Semillas de Rosa", 2.0, 11, "Semilla"),
        Semilla("Semillas de Girasol", 1.8, 6, "Semilla"),
        Semilla("Semillas de Crisantemo", 2.2, 10, "Semilla")
    };

    Maceta macetas[3] = {
       Maceta("Maceta grande", 10.0, 6, "Maceta"),
       Maceta("Maceta mediana", 15.0, 8, "Maceta"),
       Maceta("Maceta pequeña", 20.0, 11, "Maceta"),
    };

    Plaga plagas[3] = {
       Plaga("Insecticida", 10.0, 6, "Control de plagas"),
       Plaga("Fungicidas", 15.0, 8, "Control de plagas"),
       Plaga("Acaricidas", 20.0, 11, "Control de plagas"),
    };

    Fertilizante fertilizantes[3] = {
       Fertilizante("Abono granulado", 10.0, 6, "Fertilizante"),
       Fertilizante("Abono químico", 15.0, 8, "Fertilizante"),
       Fertilizante("Abono orgánico", 20.0, 11, "Fertilizante"),
    };

    int numero = 0;
    // Mostrar la lista de plantas y sus precios
    cout << "Listado de plantas en el vivero:" << endl;
    for (int i = 0; i < sizeof(plantas) / sizeof(Planta); i++) {
        cout << numero + 1 << ". " << plantas[i].getNombre() << " - Precio: $" << plantas[i].getPrecio() << ". " << plantas[i].getCantidad() << "Tipo: " << plantas[i].getTipo() << endl;
        numero++;
    }

    cout << endl << "Listado de semillas en el vivero:" << endl;
    for (int i = 0; i < sizeof(semillas) / sizeof(Semilla); i++) {
        cout << numero + 1 << ". " << semillas[i].getNombre() << " - Precio: $" << semillas[i].getPrecio() << ". " << semillas[i].getCantidad() << "Tipo: " << semillas[i].getTipo() << endl;
        numero++;
    }

    cout << endl << "Listado de macetas en el vivero:" << endl;
    for (int i = 0; i < sizeof(macetas) / sizeof(Maceta); i++) {
        cout << numero + 1 << ". " << macetas[i].getNombre() << " - Precio: $" << macetas[i].getPrecio() << ". " << macetas[i].getCantidad() << "Tipo: " << macetas[i].getTipo() << endl;
        numero++;
    }

    cout << endl << "Listado de fertilizantes en el vivero:" << endl;
    for (int i = 0; i < sizeof(fertilizantes) / sizeof(Fertilizante); i++) {
        cout << numero + 1 << ". " << fertilizantes[i].getNombre() << " - Precio: $" << fertilizantes[i].getPrecio() << ". " << fertilizantes[i].getCantidad() << "Tipo: " << fertilizantes[i].getTipo() << endl;
        numero++;
    }

    cout << endl << "Listado de artículos de control de plagas en el vivero:" << endl;
    for (int i = 0; i < sizeof(plagas) / sizeof(Plaga); i++) {
        cout << numero + 1 << ". " << plagas[i].getNombre() << " - Precio: $" << plagas[i].getPrecio() << ". " << plagas[i].getCantidad() << "Tipo: " << plagas[i].getTipo() << endl;
        numero++;
        }

    // Permitir al usuario escoger una planta y comprarla
    int opcion;
    cout << "Ingrese el número de la planta que desea comprar: ";
    cin >> opcion;
    opcion--;
    /*if (opcion < 0 || opcion > 14) {
        cout << "Opción inválida" << endl;
        return 0;
    }*/
    
    if (numero % opcion < sizeof(plantas) / sizeof(Planta)) {
        cout << "Ha escogido la planta " << plantas[opcion].getNombre() << " - Precio: $" << plantas[opcion].getPrecio() << ". " << plantas[opcion].getCantidad() << "Tipo: " << plantas[opcion].getTipo() << endl;
    }
    else if (numero % opcion < (sizeof(semillas) / sizeof(Semilla)) + (sizeof(plantas) / sizeof(Planta)) && numero % opcion > sizeof(plantas) / sizeof(Planta)) {
        cout << "Ha escogido las " << semillas[opcion-(sizeof(plantas) / sizeof(Planta))].getNombre() << " - Precio: $" << semillas[opcion].getPrecio() << ". " << semillas[opcion].getCantidad() << "Tipo: " << semillas[opcion].getTipo() << endl;
    }
    cout << "Ingrese la cantidad que desea comprar: ";
    int cantidad;
    cin >> cantidad;
    if (cantidad <= 0 || cantidad > plantas[opcion].getCantidad()) {
        cout << "Cantidad inválida" << endl;
        return 0;
    }
    float total = cantidad * plantas[opcion].getPrecio();
    plantas[opcion].setCantidad(plantas[opcion].getCantidad() - cantidad);
    cout << "Compra realizada con éxito. Total a pagar: $" << total << endl;

    cout << "Hora de salida: ";
    cin >> sali_;

    return 0;
}