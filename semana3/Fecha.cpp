#include <iostream>
#include "Fecha.h"
using namespace std;

int main(){

    cout << "Ingrese el dia que estamos hoy: ";
    int dia_;
    cin >> dia_;

    cout << "Ingrese que mes estamos: ";
    int mes_;
    cin >> mes_;

    cout << "Ingrese en que año estamos: ";
    int año_;
    cin >> año_;
    
    Fecha f{dia_, año_, mes_};

    cout << f.getDia() << " / " << f.getMes() << " / " << f.getAño();


    
}
