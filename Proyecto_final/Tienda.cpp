#include <iostream>
#include "vendedor.h"
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

    
    

    Vendedor ven{entra_, sali_, nom_, ape_};
    ven.getDetalles();
}