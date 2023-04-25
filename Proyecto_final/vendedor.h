#include <iostream>
#include <string>
using namespace std;


class Vendedor{
    private:
    int  entrada, salida;
    string nombre, apellido;

    public:
    Vendedor(int entra_, int sali_,string nom_, string ape_){
        entrada = entra_;
        salida = sali_;
        nombre = nom_;
        apellido = ape_;

        if (entra_ > 7){
            cout << "Usted a ingresado fuera del tiempo de ingreso!!!"<< endl;
        }else{
            cout << " ";
        }
    }
        
        void setEntra(int entra_) {
            entrada = entra_;
        }
        
        void setSalid(int sali_) {
            salida = sali_;
        }
        
        void setNom(int nom_) {
            nombre = nom_;
        }
        
        void setApe(int ape_) {
            apellido = ape_;
        }

        int getEntra(){
            return entrada;
        }
        
        int getSali(){
            return salida;
        }
        
        string getNom(){
            return nombre;
        }
        
        string getApe(){
            return apellido;
        }

        void getDetalles(){
            cout << "--------------------------------------------------------------------------------------------------------------------------------"<< endl;
            cout << "NOMBRE Y APELLIDO : " << getNom()<<" "<< getApe()<< endl;
            cout << "ENTRADA : " << getEntra() << endl;
            cout << "SALIDA  : " << getSali() << endl;
        }
};