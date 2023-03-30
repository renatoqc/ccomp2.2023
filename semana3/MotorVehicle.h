#include <string>
#include <iostream>
using namespace std;

class MotorVehicle{
private:

    string marca, fuelType, color ;
    int año_fabricacion, engineCapacity ;

public:

MotorVehicle(string marca_, string fuelType_, string color_, int año_fabricacion_, int engineCapacity_){
    marca = marca_;
    fuelType = fuelType_;
    color = color_;
    año_fabricacion = año_fabricacion_;
    engineCapacity = engineCapacity_;
}   

    string getMarca() {
        return marca;
    }

    string getFuelType() {
        return fuelType;
    }
    string getColor() {
        return color;
    }

    int getFabricacion() {
        return año_fabricacion;
    }
        
    int getEngineCapacity() {
        return engineCapacity;
    }

    void setMarca(string marca_){
        marca = marca_;
    }

    void setFuelType(string fuelType_){
        fuelType = fuelType_;
    }
        
    void setColor(string color_){
        color = color_;
    }

    void setAñofab(int año_fabricacion_){
        año_fabricacion = año_fabricacion_;
    }

    void setEngineCapacity(int engineCapacity_){
        engineCapacity = engineCapacity_;
    }

    void getdisplayCarDetails(){
        cout <<" " << endl;
    cout <<" " << endl;
    cout <<"Caracteristicas completas del carro:  " <<endl;
    cout << "\nMarca del vehiculo: " << getMarca();
    cout << "\nColor del vehiculo: " << getColor();
    cout << "\nTipo de combustible del vehiculo: " << getFuelType();
    cout << "\nAño de fabricacion del vehiculo: " << getFabricacion();
    cout << "\nCapacidad del motor del vehiculo: " << getEngineCapacity();
    }
};