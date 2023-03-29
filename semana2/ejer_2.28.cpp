#include <iostream>
using namespace std;

int main() {
  int num, n1, n2, n3, n4;

  cout << "Introduce un número de 4 cifras: ";
  cin >> num;//9638

  n1 = num / 1000;
  n2 = (num / 100) % 10;
  n3 = (num / 10) % 10;
  n4 = num % 10;

  cout << "Número invertido: " << n4 << n3 << n2 << n1 << endl;

  return 0;
}