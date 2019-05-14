#include <iostream>
long double probability (unsigned numbers, unsigned picks, unsigned range);
int main(){
	using namespace std;
	double total,choices,range;
	cout << "Enter the total number of choices on the game card and\n";
	cout << "the number of picks allowed, then enter second pick range:\n";
	while ( (cin>>total>>choices>>range) && (choices <=total)){
		cout << "You have one chance in ";
		cout << probability(total,choices,range);
		cout << " of winning.\n";
		cout << "Next three numbers (q to quit):";
	}
	cout << "bye\n";
	return 0;
	
}
long double probability(unsigned numbers, unsigned picks, unsigned range){
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n=numbers,p=picks; p>0;n--,p--){
		result *= n/p;
		std::cout << "current result is: " <<result <<std::endl;
	}
	result *=  range;
	return result;
}
