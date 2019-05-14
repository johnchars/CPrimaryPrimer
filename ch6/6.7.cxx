#include <iostream>
#include <cctype>
int main(){
	using namespace std;
	int flag = true;
	int origin,assistant,other;
	origin=assistant=other=0;
	char ch;
	char temp[20];
	char vowels[10]={'a','A','e','E','i','I','o','O','u','U'};
	cout << "Enter words (q or Q to quit):\n";
	int i=0;//记录单个单词
	cin.get(ch);
	while ( 1 ){
		//cin.get(ch);
		if ( ch == 'q'|| ch=='Q')
			break;
		flag = isalpha(ch);
		if ( flag ){
			//int i=0;
			while ( !isspace(ch)){
				cin.get(ch);
				if ( isspace(ch)){
					i=0;
					for (int m=0;m<10;m++){
						if ( temp[0] == vowels[m])
							origin++;
						else assistant++;
					}
				}
				else {
					temp[i++] = ch;
				}	
				
			}
			cin.get(ch);
		}
		else if ( isspace(ch))
			cin.get(ch);
		else {  int i=0; //update temp arrary
		      	while (!isspace(ch)){
				temp[i++] = ch;
				cin.get(ch);
			}
			other++;
		}
	}
	cout << origin <<" words beginning with vowels\n";
	cout << assistant/10 << " words beginning with consonants\n";
	cout << other << " others\n";
	return 0;
}
