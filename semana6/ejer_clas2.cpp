#include <iostream>

using namespace std;

void invertirRecursivo(int arr[], int inicio, int fin) {
  if (inicio >= fin) {
    return;
  }
  

  int temp = arr[inicio];
  arr[inicio] = arr[fin];
  arr[fin] = temp;
  

  invertirRecursivo(arr, inicio + 1, fin - 1);
}

void invertirIterativo(int arr[], int tam) {
  int inicio = 0;
  int fin = tam - 1;
  

  while (inicio < fin) {
    int temp = arr[inicio];
    arr[inicio] = arr[fin];
    arr[fin] = temp;
    inicio++;
    fin--;
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int tam = 5;
  
 
  cout << "Arreglo antes de invertirlo: ";
  for (int i = 0; i < tam; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  
 
  invertirRecursivo(arr, 0, tam - 1);
  
  cout << "Arreglo después de invertirlo (recursivo): ";
  for (int i = 0; i < tam; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  
  
  invertirIterativo(arr, tam);
  
  
  cout << "Arreglo después de invertirlo (iterativo): ";
  for (int i = 0; i < tam; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  
  return 0;
}