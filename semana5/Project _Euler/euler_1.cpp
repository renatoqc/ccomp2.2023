#include <iostream>
using namespace std;

int main(){

    long long suma;
    for(int i = 0; i < 1000; i++){
        if(i % 3 == 0 || i % 5 == 0)
            suma += i; 
            
    }
    cout << suma <<endl;
}