#include <iostream>
using namespace std;

class bankAccount {
private:
	string ownerName;
	double balance;
	int accountNumber;
public:
	bankAccount() {
		this->ownerName = "Nastya P.M";
		this->balance = 215.3;
		this->accountNumber = 333961;
	}

	bankAccount(string ownerName, double balance, int accountNumber) {
		this->ownerName = ownerName;
		this->balance = balance;
		this->accountNumber = accountNumber;
	}

	void deposit(double amount) {
		balance = balance + amount;
	}

	void withdraw(double amount){
		if (balance >= amount) {
			balance = balance - amount;
		}
		else {
			cout << "Not enough money!" << endl;
		}
	}

	void display() {
		cout << "Owner: " << ownerName << endl;
		cout << "Balance: " << balance << endl;
		cout << "Account number: " << accountNumber << endl;
	}

	friend void transfer(bankAccount& n1, bankAccount& n2, double amount);
};

void transfer(bankAccount& n1, bankAccount& n2, double amount) {
	if (n1.balance >= amount) {
		n1.balance -= amount;
		n2.balance += amount;
	}
	else {
		cout << "Not enough money for transfer!" << endl;
	}
}

int main() {
	bankAccount n1;
	bankAccount n2("Misha P.M", 568.2, 467800);

	n1.deposit(300);
	n2.deposit(700);

	n1.withdraw(19);

	transfer(n1, n2, 250);

	cout << "Account 1: " << endl;
	n1.display();

	cout << endl;

	cout << "Account 2: " << endl;
	n2.display();

	return 0;
}