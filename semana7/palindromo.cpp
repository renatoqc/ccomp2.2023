#include <iostream>
using namespace std;

bool esPlaiter(const int arr [], const int tam){
    int ini  = 0;
    int fin  = tam -1;
    while(ini < fin){
        if(arr[ini++] != arr[fin--])
        return false;
    }
    return true;
}

bool esPaliRec(const int arr[], int tam, int ini = 0){
    if(ini >= tam-1)
        return true;
    if(arr[ini] != arr[tam-1])
        return false;
    return esPaliRec(arr, --tam, ++ini);

}

int main(){

    int arr[] = {1,2,3,3,2,1};
    cout <<esPlaiter(arr, 7) << endl;
    cout <<esPaliRec(arr, 7) << endl;
    return 0;

}