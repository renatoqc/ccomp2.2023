#include <iostream>
using namespace std;

int main(){
    string n;
    int suma = 0;

   
    cout << "Ingrese una cadena: ";
    cin >> n;

    int cont;
    for(int i = 0; i < n.length(); i++){
       suma += (n.at(i) - '0');

    }
    cout << "La suma es " << suma << endl;
    
    

    

    return 0;
}
