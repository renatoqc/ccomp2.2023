#include <iostream>
using namespace std;

bool esCaracter( char n){

    int val = static_cast <int> (n);

    return (val >= 65 && val <= 90 || val >= 97 && val <=122 );
     
        
}

int main (){

    char n;
    cout << "Ingrese un caracter: ";
    cin >> n;

    cout << esCaracter(n) << endl;

    return 0;
}