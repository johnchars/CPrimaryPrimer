#include <iostream>
#include <string>

using namespace std;
void strcount( const string str);

int main(){
//	using namespace std;
	string input;
	cout << "Enter a line:\n";
	getline(cin,input);
	strcount(input);
	//char ch;
//	cout <<"Enter q to quit\n";
//	cin.get(ch);

	while ( input != ""){
		cout << "Enter next line(empty line to quit: \n";
		getline(cin,input);
		strcount(input);
	//	cin.get(ch);
	}
//	cin.get(ch);
	return 0;
}

void strcount( const string str){
//	using namespace std;
	static int total = 0;
	int count = 0;

	cout << "\"" << str << "\" constains ";
	count = str.size();
	total += count;
	cout << count << " characters.\n";
	cout << total << " characters.\n";
}
