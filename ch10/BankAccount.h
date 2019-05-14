#ifndef Bank_Account_H_
#define Bank_Account_H_

class BankAccount{
	enum {Max=20};
private:
	char name[Max];
	char acctnum[Max];
	double money;
public:
	BankAccount(const char* client, const char* num, double cash = 0.0);
	BankAccount();
	void show() const;
	void deposit( double cash);
	void withdraw( double cash);
	void update(const char* client, const char* num, double cash = 0.0);

};

#endif
