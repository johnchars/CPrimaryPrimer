#include <iostream>
#include <cctype>
int main(){
	using namespace std;
	cout << "Type words, ending by typing @\n";
	char ch;
	cin.get(ch);
	while(ch !='@'){
		if (isalpha(ch))
			if (islower(ch))
				cout << char(toupper(ch));
			else if (isupper(ch))
				cout << char(tolower(ch));
			else cout << " Here is a special character\n";
		else if (isdigit(ch));
		else if (isprint(ch))
			cout << ch;
		cin.get(ch);
	}
	return 0;
}
