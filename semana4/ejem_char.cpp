#include <iostream>
using namespace std;

int main(){
    char n;
    cout << "Ingrese un caracter: ";
    cin >> n;

    int val = static_cast <int> (n);

    if(val >= 65 && val <= 90 || val >= 97 && val <=122 ){
        cout << "El caracter ingresado es una letra." << endl;
    }else{
        cout << "El caracter ingresado no es una letra." << endl;
    }


    return 0;
}
