#include <iostream>
using namespace std;

int main ()
{
    int num1, num2, num3;
    cout<<"Ingrese tres numeros diferentes: "; cin>>num1>>num2>>num3;
    

    int sum, prod, mayor, menor, prom;

    sum=num1+num2+num3;
    prod=num1*num2*num3;
    prom=num1*num2*num3/3;
    
    cout<<"La suma de estos numero es: "<<sum<<endl;
    cout<<"El producto de estos numeroes es: "<<prod<<endl;   
    cout<<"El promedio de estos numero es: "<<prom<<endl;

    int min = num1;
    int max = num1;

    if(num1<num2 && num1<num3)
        min=num1;
    if(num2<num1 && num2<num3)
        min=num2;
    if(num3<num1 && num3<num2)
        min=num3;
    if(num1>num2 && num1>num3)
        max=num1;
    if(num2>num1 && num2>num3)
        max=num2;
    if(num3>num1 && num3>num2)
        max=num3;

   cout<<"El numero menor es: "<<min<<endl;
   cout<<"El numero mayor es: "<<max<<endl;


}