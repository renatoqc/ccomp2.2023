#include <iostream>
using namespace std;

int main ()
{
    int radio, diametro, circunferencia, area;
    int pi=3.14159;

    cout<<"Ingrese un numero: ";
    cin>>radio;

    radio = 2*pi;
    diametro = radio*2;
    circunferencia = pi*diametro;
    area = pi*(radio*radio);

    cout<<"El radio es: "<<radio<<endl;
    cout<<"El diametro es: "<<diametro<<endl;
    cout<<"La circunferencia es: "<<circunferencia<<endl;
    cout<<"El area es: "<<area<<endl;
    
    
    return 0;

}