#include <iostream>
#include "BankAccount.h"
#include <cstring>

using std::cout;
using std::endl;

BankAccount::BankAccount(const char* client, const char* num, double cash){
	strncpy(name,client,Max-1);
	strncpy(acctnum,num,Max-1);
	name[Max-1] = '\0';
	acctnum[Max-1] = '\0';
	money = cash;	
}

BankAccount::BankAccount(){
	strcpy(name,"null");
	strcpy(acctnum,"000000000");
	money = 0.0;
}

void BankAccount::show() const {
	cout << "Client is: " << name << endl;
	cout << "account num : " << acctnum << endl;
	cout << "balance : " << money << endl;
}

void BankAccount::deposit( double cash){
	cout << "Deposit " << cash << " dollars to " << name << "'s " << acctnum << endl;
	money += cash;
}

void BankAccount::withdraw( double cash ){
	if (cash > money)
		cout << "Your balance not enough\n";
	else {
		cout << "Withdraw money : "<< money  << endl;
		money -= cash;
	}
}
void BankAccount::update(const char* client, const char* num, double cash){
	strncpy(name,client,Max-1);
	strncpy(acctnum,num,Max-1);
	name[Max-1] = '\0';
	acctnum[Max-1] = '\0';
	money = cash;	
}

