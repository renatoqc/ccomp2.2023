#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Ingrese un numero: ";
    cin >> n;
    int n1, n2, fib;
    n1 = n2 = fib = 1;
    while (n > 0){

        fib = n1 + n2;
        n1 = n2;
        n2 = fib;

        cout << "Fib de " << n << " es " << fib;
    }

    return 0;
}