#include <iostream>
using namespace std;

int main () {
    
    int a,b,suma;
    
    cout << "Ingrese su número: " << endl;
    cin >> a >> b;
    
    suma = a+b;

    if (2%suma == 0)
    {
        cout << "La suma es par: "<<suma<<endl;
        
    }
        else 
        cout << "La suma es impar: "<<suma<<endl;

    return 0;
}