#include <iostream>
using namespace std;


long long fact(int n){
    if(n == 0){
        return 1;
    } else {
        return n * fact(n-1);
    }
}

int main(){
    int n;
    cout << "Ingresse el numero: ";
    cin >> n;

    cout << "El facotrial de " << n << " es " << fact(n) << endl;

    return 0;
}