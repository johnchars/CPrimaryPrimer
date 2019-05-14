#include <iostream>
int main(){

	using namespace std;
	float sum=0;
	float num;
	cout << "Enter a number please\n";
	cout << "Note: Enter 0 to shutdown this process\n";
	cin >> num;
	while( num ){

		sum +=num;
		cout << "Current sum is: " << sum << endl;
		cout << "Enter next number you want to sum\n";
		cin >> num;
	}
	return 0;

}

