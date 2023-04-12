#include <iostream>
using namespace std;

bool esNumero(char n){

    return (n >= 48 && n <= 57 );        
}

int main (){

    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    cout << esNumero(n) << endl;
    return 0;
}