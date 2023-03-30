#include <iostream>
#include <string>
using namespace std;

class Fecha{
private:
    int dia, año;
    int mes {0};
public:
    Fecha(int dia_, int año_, int mes_){

        dia = dia_;
        año = año_;
        
        if(mes > 0 && mes < 13){
            mes_ = mes;
        }else{
            cout << "El mes es incorrecto.";
        }
    }

    int getDia() {
        return dia;
    }

    int getAño() {
        return año;
    }

    int getMes() {
        return mes;
    }

    void setDay(int dia_){
        dia = dia_;
    }

    void setAño(int año_){
        año = año_;
    }

    void setMES(int mes_){
        mes = mes_;
    }


};
