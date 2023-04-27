#include <iostream>
using namespace std;

bool esPlaiter(int *ini, const int tam){
    int *fin  = (ini + tam -1);
    while(ini < fin){
        if(*ini != *fin)
        return false;
        ini++;
        fin--;
    }
    return true;
}

bool esPaliRec(int *ini, int *fin){
    if(ini >= fin)
        return true;
    if(*ini != *fin )
        return false;
    return esPaliRec(++ini, --fin);
}

void print(int *arr, int tam){
    cout << "[";
    for(int i = 0 ; i < tam; i++, arr++)
        cout << *arr << " ";
    cout <<"]"<< endl;
}

int main(){

    int arr[] = {1,2,3,3,2,1};
    int tam = sizeof(arr) / sizeof(arr[0]);

    cout <<esPlaiter(arr, tam) << endl;
    cout <<esPaliRec(arr, arr+tam-1) << endl;
}