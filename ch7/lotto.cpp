#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main(){
	using namespace std;
	double total,choices;
	cout << "Enter the total number of choices on the game card and\n"
		"the number of picks allowed:\n";
	while ((cin>>total>>choices) && choices <= total ){
		cout << "You have one chance in ";
		cout << probability(total,choices);
		cout << " of winning.\n";
		cout << "Next two numbers (q to quit): ";
		cout << "cin states: " << cin.good() << endl;
	}
	cout << "cin states: " << cin.good() << endl;
	cout << "Bye\n";
	return 0;
}

long double probability(unsigned numbers, unsigned picks){
	long double result = 1.0;
//	long double n;
//	unsigned p;

	for (;picks>0;numbers--,picks--)
		result = result * numbers / picks;
	return result;
}
