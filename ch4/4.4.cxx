#include <iostream>
#include <cstring>
int main(){
	using namespace std;
	string first,last,name;
	cout << "Enter first name\n";
	getline(cin,first);
	cout << "Enter last name\n";
	getline(cin,last);
	name = first + ", " + last;
	cout << "name is " << name << endl;
	return 0;
}
