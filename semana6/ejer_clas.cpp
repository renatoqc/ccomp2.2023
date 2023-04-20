#include <iostream>
using namespace std;

bool recur(int arr[5]){
    
    if((arr == arr) && (arr == arr)){
        cout << "Es un palindromo";
    } else{
        cout << "No es un palindromo";
    }

}
int main(){

    int n;
    int arr[5];
    cout <<"Ingrese 5 valores enteros: ";

    for(int i = 0; i < 5; i++)
        cin >> arr[i];
        
        cout << "Los valores en el arreglo son:"<< endl;

    for(int i = 0; i < 5; i++){
        cout << " " << arr[i]<< endl;
    }

    
    cout << "Los elemntos son  "<< recur(arr) ;
    
   
    return 0;
}