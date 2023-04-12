#include <iostream>
using namespace std;

int contarCharCadena(string cad, char car){

    int cont = 0;
    for(int i = 0; i < cad.length(); i++){
        if(car == cad.at(i)){
            cont++;
        }
    }
    return cont;

}

int main(){
    string cad;
    char car;
    int cont;
   
    cout << "Ingrese una cadena: ";
    cin >> cad;
    cout << "Ingrese un caracter: ";
    cin >> car;

    cout << contarCharCadena(cad, car)<< endl;

    return 0;
}
