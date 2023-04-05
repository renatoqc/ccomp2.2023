#include <iostream>
using namespace std;

int main(){
    char n1, n2;
    int n3, n4;

    cout << "Ingrese el primer caracter: " ;
    cin >> n1;

    cout << "Ingrese el primer caracter: " ;
    cin >> n2;

    int val1 = static_cast <int> (n1);
    int val2 = static_cast <int> (n2);

    if ((val1 <= 48 || val1 >= 57) && (val2 <= 48 || val2 >=57) ){
        cout << "Uno de los caracteres ingresados no es un numero";
    }else {
        cout << (val1-'0') + (val2-'0');
    }
}