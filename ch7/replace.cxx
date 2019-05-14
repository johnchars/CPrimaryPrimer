#include <iostream>
#include <cctype>
#include <cstdlib>
int replace(char* str, char ch, char c2);
int main(){
	using namespace std;
	const int size = 60;
	char str[size];
	char ch,ch1,ch2;
	int result=true;
	while (result){
		cout << "Enter string would be replace\n";
		cin.getline(str,size);
	//	cin.get();
		cout << "Enter character would be replaced\n";
		cin >> ch1;
		cout << "Enter second character will replace the fronter\n";
		cin >> ch2;
		result = replace(str,ch1,ch2);
		cout << "now string is " << str << endl;
		cout << result << " " << ch1 << " replaced by " << ch2 << endl;
		cout << "Enter q to quit\n";
		cin >> ch;	
		//cin.get();
		if (ch == 'q')
			result = false;
	}
	return 0;
		
}

int replace(char* str, char c1, char c2){
	using namespace std;
	int count=0;
	if (isalnum(c1))
		if (isalnum(c2))
			while ( *str != '\0'){
				if ( *str == c1){
					*str = c2;
					count ++;	
				}
				str ++;	
			}
		else{
	       		cout << c2 << " is not a character!\n";
			return 0;
		//	exit(EXIT_FAILURE);
			}
	else{
       		cout << c1 << " is not a character!\n";
		return 0;
		//exit(EXIT_FAILURE);
		}
	return count;
}
