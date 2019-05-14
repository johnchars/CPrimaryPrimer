#include <iostream>
#include "BankAccount.h"

int main(){
	using namespace std;
	BankAccount client[3];
	char usr[20];
	char idnum[20];
	double balance;
	for (int i=0; i<3; i++){
		cout << "Enter " << i+1 << " client data.\n";
		cout << "usrname : " ;
		cin.getline(usr,20);
		cout << endl;
		while (cin.get() !='\n')
			continue;
		cout << "user account: ";
		cin.getline(idnum,20);
		cin.get();
		cout << endl;
		cout << "user balance " ;
		cin >> balance;
		cin.get();
		cout << endl;
		client[i].update(usr,idnum,balance);
	}
	for (int i=0; i<3; i++){
		client[i].show();
	}
	cout << "Modify second client data:\n";
	client[1].deposit(5000.3);
	client[1].show();
	cout << "withdraw money from client[1]" << endl;
	client[1].withdraw(2000.0);
	client[1].show();
	return 0;
}
