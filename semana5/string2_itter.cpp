#include <iostream>
using namespace std;

bool esNumero(char n){

    return (n >= 48 && n <= 57 );        
}

int contarDigitos(string cad){

    int cont;
    for(int i = 0; i < cad.length(); i++)
        if(esNumero(cad.at(i)))
        cont++;

}

int main(){
    string cad;
    int n;

    cout << "Ingrese una cadena: ";
    cin >> cad;

    cout << contarDigitos(cad);
    
    return 0;

}