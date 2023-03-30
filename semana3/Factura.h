#include <iostream>
#include <string>
using namespace std;

class Factura{
    private:
    string num_pieza, descri_pieza;
    int cant, precio;
    double iva{0.20};
    double descuento{0};

    public:
    Factura(string num_pieza_, string descri_pieza_, int cant_, int precio_, double iva_, double descuento_){

        num_pieza = num_pieza_;
        descri_pieza = descri_pieza_;
        cant = cant_;
        precio = precio_;
    }

        if(descuento_ > 0){
            decuento = descuento_;
        }
        string getNumPieza(){
            return num_pieza;
        }

        string getDescripcion(){
            return descri_pieza;    
        }
        
        int getCantidad(){
            return cant;
        }

        int getPrecio(){
            return precio;
        }

        double getIva(){
            return iva;
        }

        double getDescuento(){
            return descuento;
        }

        void setNumPieza(string num_pieza_){
            num_pieza = num_pieza_;
        }

        void setDescripcion(string descri_pieza_){
            descri_pieza = descri_pieza_;
        }

        void setCantidad(int cant_){
            cant = cant_;
        }

        void setPrecio(int precio_){
            precio = precio_;
        }

        void setIva(double iva_){
            iva = iva_;
        }

        void setDescuento(double descuento_){
            descuento = descuento_;
        }




    
};