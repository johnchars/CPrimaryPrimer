#include <iostream>
using namespace std;
int main()
{
	double wages[3]={1000.0, 2000.0, 3000};
	double *pw, *pp;
	pw = wages;
	pp = pw;
	cout << "pointer pw =" << *pw << "address pw " << pw << endl;
	cout << "sizeof pointer *pw= " << sizeof(pw) << endl;
	cout << " address pointer pp" << pp << endl;
	cout << " content of pp " << *pp << endl;
	return 0;
}
