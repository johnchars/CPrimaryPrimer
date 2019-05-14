#include <iostream>
#include <string>
int main(){
	using namespace std;
	struct Car{
		string name;
		int year;
	};

	struct Car car, *p;
	p = &car;
	cout << "name\n" ;
	getline(cin,p->name);
	cout << p->name <<endl;
	return 0;
	
}
