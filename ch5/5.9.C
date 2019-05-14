#include <iostream>
#include <string>
int main(){
	using namespace std;
	cout << "Enter words (to stop, type the word done):\n";
	string str;
	int sum=0;
	cin >> str;
	while( str != "done"){
		cin >> str;
		sum +=1;
		cout << sum <<": current flag is: \n";
	}
	cout << "You entered a total of 7 words.\n" ;
	return 0;

}
