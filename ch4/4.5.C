#include <iostream>
#include <string>
int main(){
	using namespace std;
	struct CandyBar{
		string brand;
		float weight;
		int calorie;
	};
	CandyBar snack = {"Mocha Munch", 2.3, 350};
	cout << "Candy is \n" << snack.brand << endl;
	cout << snack.weight << endl << snack.calorie << endl;
	return 0;
}
	
