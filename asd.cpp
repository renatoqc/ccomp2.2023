#include <iostream>

using namespace std;

int par(int x){
    if(x % 2 == 0)
    {
        cout << "El numero es multiplo de dos";
    }
    else 
    {
        cout << "El numero no es multiplo de dos";
    }

}
int main (){
    int x;
    cout << "es mmultiplo de dos ";
    cin >> x;
    return par(x);
}