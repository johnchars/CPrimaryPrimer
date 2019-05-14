#include <iostream>
#include <cstring>
int main(){
	using namespace std;
	const int Size = 20;
	char firstname[Size];
	char lastname[Size];
	//string name, *pst, test;
	char name[50];
	//pst = &name;
	cout << "Enter your first name\n";
	cin.getline(firstname,Size);
	cout << "Enter your Last name\n";
	cin.getline(lastname,Size);

	//name = firstname + ", " + lastname;
	/*
	int n = strlen(firstname);
	for(int i=0; i< n; i++)
		name[i] = firstname[i];
	name[n] = ',';
	name[n+1]  = ' ';
	int m = strlen(lastname);
	for( int j=0; j< m; j++)
		name[n+j+2] = lastname[j];
	*/
	strcpy(name, firstname);
	strcat(name, ", ");
	strcat(name, lastname);
	string test;
	test = "Here has a space , the back content";
	cout << test << endl;
	cout << "Here's the information in a single string: " << name << endl;
}
