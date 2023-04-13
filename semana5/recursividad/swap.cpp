#include <iostream>
using namespace std;


void intercambio(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;

    cout << "El valor de a en intercambio es: " << a <<endl;
    cout << "El valor de b en intercambio es: " << b <<endl;
}

int main(){
    int q = 10;
    int e = 20;

    intercambio(q,e);
    cout << "El valor de q en main es: " << q <<endl;
    cout << "El valor de e en main es: " << e <<endl;

    return 0;
}