#include <iostream>
using namespace std;

long long fi_rec(int n){
    if(n == 0 || n == 1){
        return 1;
    } else {
        return fi_rec(n-2) + fi_rec(n-1);
    }

    return 0;
}

void imprimirFib(int n){

    int n1, n2, fibo;
    n1 = n2 = fibo = 1;

    for(int i = 0; i < n; i++){
        cout << fi_rec(i)<< " ";
    }
    cout << endl;
}

int main (){
    int n;
    cout << "Infrese un numero: ";
    cin >> n;

    imprimirFib(n);

    return 0;
}