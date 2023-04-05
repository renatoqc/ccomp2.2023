#include <iostream>
using namespace std;

int main(){
    string n;
    char x;
   
    cout << "Ingrese una cadena: ";
    cin >> n;
    cout << "Ingrese un caracter: ";
    cin >> x;

    int cont;
    for(int i = 0; i < n.length(); i++){
        if(x == n.at(i)){
            cont++;
        }
    }
    cout << "El caracter " << x << " se repite " << cont << " veces " << endl;

    return 0;
}
