#include <iostream>
#include <string>
int main(){
	using namespace std;
	struct Car{
		string name;
		int year;

	};
	const int PoSize = 10;
	struct Car* point[PoSize]={NULL};
	cout << "How many cars do you wish to catalog?\n";
	int num;

	cin >> num;
//	cin.clear();
	cin.get();
	for (int i=0; i< num; i++){
		point[i] = new Car;
		cout << "Car #" << i+1 << endl;
		cout << "Please enter the maker: \n";
//		cin.clear();
		cin.get();
		getline(cin,point[i]->name);
		cout << "Please enter the year: \n";
		cin >> point[i]->year;
		
	}
	
	cout << "Here is your colleciton\n";

	for (int j=0;j< num; j++){
		cout << point[j]->year << point[j]->name << endl;
		delete point[j];
	}
	return 0;
}

