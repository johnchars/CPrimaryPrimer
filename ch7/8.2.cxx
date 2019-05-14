#include <iostream>
#include <string>

const int Seasons = 4;
const char* sname[Seasons] = 
	{"Spring", "Summer", "Fall", "Winter"};

struct expense{
	double number[Seasons];
};

void fill( expense* pe);

void show( const expense* pe);

int main(){
	expense s;
	fill(&s);
	show(&s);
	return 0;	
}

void fill( expense* pe){
	using namespace std;
	for (int i=0; i<Seasons; i++){
		cout << "Enter " << sname[i] << " expense: ";
		cin >> pe->number[i]; 
	}
}

void show( const expense* pe){
	using namespace std;
	double total;
	cout << "\nEXPENSES\n";

	for (int i=0; i<Seasons; i++){
		cout << sname[i] << ": $" << pe->number[i] << endl;
		total += pe->number[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
