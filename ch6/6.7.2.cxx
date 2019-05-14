#include <iostream>
#include <cctype>

using namespace std;

char temp[20];
void words();

int main(){
	// V记录vowels，C记录consonants，
	//O记录others，count记录V是否变化
	int V=0,C=0,O=0,count=0; 
	char vowels[10] = {'a', 'e', 'i', 'o','u','A','E','I','O','U'};
	words();
	//cout << temp << endl;
	while (temp[0] != 'q' || temp[1] !='\0'){
		count = V;
		if (isalpha(temp[0])){
			for (int i=0;i<10;i++){
				if (temp[0] == vowels[i])
				V++;
			//	else C++;		
			}
			if ( count == V)
				C++;
		}
		else if (temp[0] == '\0' || temp[0] == '\n')
			cout << "This word is space or Enter key\n";
		else
			O++;
		words();
		
	}
	cout << V << " words beginning with vowels.\n";
	cout << C << " words beginning with consonants.\n";
	cout << O << " others\n";
	return 0;
//	cout << words() << endl;
}
void words(){
	char ch;
	temp[0]=temp[1]='\0';
//	char* parr=NULL;
	int i=0,flag=true;
	while (flag){
		cin.get(ch);
		if ( isalnum(ch))
			temp[i++] = ch;
		else if (isspace(ch) || ispunct(ch)){
			temp[i] = '\0';
			flag = false;
			i = 0;
		}
	}
	cout << "current single words is: "<<temp<<endl;
//	parr = temp;
//	return temp;

}
