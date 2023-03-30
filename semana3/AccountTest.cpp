#include <iostream>
#include "Account.h"
using namespace std;

int main()
 {
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

 cout << "account1: " << account1.getName() << " balance is $"
 << account1.getBalance() ;
 cout << "\naccount2: " << account2.getName() << " balance is $"
 << account2.getBalance(); 

 cout << "\n\nEnter deposit amount for account1: "; 
 int depositAmount;
 cin >> depositAmount; 
 cout << "adding " << depositAmount << " to account1 balance";
account1.deposit(depositAmount);

 cout << "\n\naccount1: " << account1.getName() << " balance is $"
 << account1.getBalance();
 cout << "\naccount2: " << account2.getName() << " balance is $"
 << account2.getBalance();

 cout << "\n\nEnter deposit amount for account2: "; 
 cin >> depositAmount; 
 cout << "adding " << depositAmount << " to account2 balance";
account2.deposit(depositAmount);

 cout << "\n\naccount1: " << account1.getName() << " balance is $"
 << account1.getBalance();
 cout << "\naccount2: " << account2.getName() << " balance is $"
 << account2.getBalance() << endl;

 cout <<"\n\n Enter withdrawal amount for account1: ";
 int retirocuenta;
 cin >> retirocuenta;
 cout <<" Withdrawing " << retirocuenta << " to account1 balance\n";
 account1.retiro_(retirocuenta);

cout << "\naccount1: " << account1.getName() << " balance is $"
 << account1.getBalance();
 cout << "\naccount2: " << account2.getName() << " balance is $"
 << account2.getBalance() << endl;

 
} 