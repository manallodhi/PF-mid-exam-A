#include <iostream>
using namespace std;

int main() {
	float balance = 3000 ;
	float deposit_amount , withdraw  , total ;
	int choice ;
  do {
	cout << "ATM OPTIONS \n" ;
	cout << "1.Check balance \n " ;
	cout << "2.Deposit Money \n " ;
	cout << "3.Withdraw money \n " ;
	cout << "4.EXIT \n " ;
	cout << "Enter the choice : " ;
	cin >> choice ;
	
	switch (choice) {
		case 1 :
			cout << "Your current balance is $"<< balance << endl ;
			break ;
		case 2 :
			cout << "Deposit Amount $" ;
			cin >> deposit_amount ;
			balance += deposit_amount ;
			cout << "Deposit successful ! New current balance $" << balance << endl ;
			break ;
		case 3 :
			cout << "Withdrawal amount $" ;
			cin >> withdraw ;
			if (withdraw > balance) {
				cout << "Insufficient Balance , try again " << endl ;
			} else {
				balance -= withdraw ;
				cout << "Withdraw successful ! current balance $" << balance << endl ;
			}
			break ;
		case 4 :
			cout << "Exiting....\n";
			break ;
		default :
			cout << "Invalid option , try again \n" ;
			break ;				
	}
  }while(choice!=4);
    total += balance ;
    cout << "Current balance $" <<total ;
	
	return 0;
}
