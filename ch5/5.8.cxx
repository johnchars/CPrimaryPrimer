#include <iostream>
#include <cstring>
int main(){
	using namespace std;
	const int charSize = 20;
	//char word[charSize];
//	char* p = new word[charSize];
	int sum=0,flag=0;
	char str[5] ;
	strcpy(str,"done");
	cout << "Enter words (to stop, type the word done):\n";
	do{
		char str2[charSize];
		cin >> str2;
		cin.clear();
		sum +=1;
		flag = strcmp(str2,str);
		cout << sum << " flag is: " << flag << endl;
		//delete p;
	}while(flag!=0);
	cout << "You Entered a total of " << sum-1 << " words.\n";
	return 0;

}