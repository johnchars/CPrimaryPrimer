#include <iostream>
int main(){
	using namespace std;
	float a=1;
	char flag=1;
	while( flag && a>0 )
	{
		//flag=ture;
		cin >> a;
		cout << a << endl;
		cout << "cin.good(): " << cin.good() << endl;
		cout << "cin.failbit() : " << cin.fail() << endl;
	}
	return 0;

}
