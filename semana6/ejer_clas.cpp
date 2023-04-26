#include <iostream>
using namespace std;

bool esPalindromoRecursivo(int arr[], int start, int end) {
    if (start >= end) {
        return true;
    }
    if (arr[start] != arr[end]) {
        return false;
    }
    return esPalindromoRecursivo(arr, start + 1, end - 1);
}

bool esPalindromoIterativo(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[5];
    cout << "Ingrese 5 valores para el arreglo: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    int size = sizeof(arr) / sizeof(arr[0]);
    if (esPalindromoRecursivo(arr, 0, size - 1)) {
        cout << "El arreglo es un palindromo (recursivo)" << endl;
    } else {
        cout << "El arreglo no es un palindromo (recursivo)" << endl;
    }
    if (esPalindromoIterativo(arr, size)) {
        cout << "El arreglo es un palindromo (iterativo)" << endl;
    } else {
        cout << "El arreglo no es un palindromo (iterativo)" << endl;
    }
    return 0;
    }
}