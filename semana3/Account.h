#include <string>
using namespace std;
#include <iostream>

class Account {
public:

Account(string accountName, int initialBalance )
: name{accountName} { 
    if (initialBalance > 0) { 
    balance = initialBalance;
    }

}

    void retiro_(int retirocuenta){
        if (retirocuenta > balance){
            std::cout << "El monto del retiro excedió el saldo de la cuenta.\n";
        } else {
            balance = balance - retirocuenta;
        }  
    }
    void deposit(int depositAmount) {
        if (depositAmount > 0) { 
            balance = balance + depositAmount;
        }
    }
    int getBalance() const {
        return balance;
}

 void setName(string accountName) {
 name = accountName;
 }

 
    string getName() const {
 return name;
 }
private:
string name;
int balance{0};
int retiro;

};