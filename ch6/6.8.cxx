#include <iostream>
#include <cctype>
#include <cstdlib>
#include <fstream>

using namespace std;

long int readChar();
int main(){
	long int count;
	count = readChar();
	cout << "Current file has " << count << " characters\n";
	return 0;
}
long int readChar(){
	long int i=0;
	const int SIZE = 60;
	char ch;
	char fileName[SIZE];
	ifstream inFile;
	cout << "Enter name of data file.\n";
	cin.getline(fileName,SIZE);
	inFile.open(fileName);
	if ( !inFile.is_open()){
		cout << "Could not open the file " << fileName << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	inFile.get(ch);
	while ( !inFile.eof()){
		if ( isalpha(ch))
			i++;
		else if ( isdigit(ch))
			i++;
		else if ( ispunct(ch))
			i++;
		else if ( isspace(ch))
			i++;
		inFile.get(ch);
	}
	 
	return i;
}
