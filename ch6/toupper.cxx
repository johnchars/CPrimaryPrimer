#include <iostream>
#include <cctype>
int main(){
	using namespace std;
	char ch;
	cin.get(ch);
	while(ch != '@'){
		cout << char(toupper(ch));
		cin.get(ch);
		cout << "original ch: " << ch;
	}
	return 0;
}
