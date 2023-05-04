#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Plantas{
    
    private:
    string nombre;
    string tipo;

    public:
    Plantas(string nombre_, string tipo_){
        nombre = nombre_;
        tipo = tipo_;
        void mostrarplanta();
    }

    void Plantas::mostrarplantas(){
    cout << "Nombre: "<<nombre<< endl;
    cout << "Tipo: "<<tipo;
    }
};

class Plantas_Ornamentales : public Plantas{

    private:
    string name;

    public:
    Plantas_Ornamentales(string nombre_, string tipo_, string name_):Plantas(nombre_, tipo_){
        name = name_;
        void mostrarOrna();
    }

    void Plantas_Ornamentales::mostrarOrna(){
        cout << "Nombre del tipo de planta ornamental: "<<name;
    }
};