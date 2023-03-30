#include <iostream>
#include "MotorVehicle.h"
using namespace std;

int main(){

    
    cout << "¿Cual es el tipo de su vehiculo?: ";
    string marca_;
    cin >> marca_;

    cout << "¿Qué color es su vehiculo?: ";
    string color_;
    cin >> color_;

    cout << "¿Qué tipo de combustible usa su vehiculo?: ";
    string fuelType_;
    cin >> fuelType_;

    cout << "¿De qué año es su vehiculo?: ";
    int año_fabricacion_;
    cin >> año_fabricacion_;

    cout << "¿Cuanta capacidad tiene su motor?: ";
    int engineCapacity_;
    cin >> engineCapacity_;

    MotorVehicle carro{marca_,color_,fuelType_, año_fabricacion_, engineCapacity_};

    carro.getdisplayCarDetails();
    

}