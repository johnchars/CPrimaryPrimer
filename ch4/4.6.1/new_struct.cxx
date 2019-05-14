#include <iostream>
#include <cstring>
int main(){
	using namespace std;
	struct fish{
		string sort;
		int weight;
		float length;
	};
	const int N = 20;
	fish* pstrct = new fish;
	cout << " Enter sort\n";
	getline(cin,pstrct->sort);
	//cin >> pstrct -> sort;
	cout << " Enter weight \n";
	cin >> pstrct->weight;
	cout << " Enter lenght \n";
	cin >> pstrct -> length;

	cout << pstrct -> sort << endl;
	cout << pstrct -> weight << " angs\n";
	cout << pstrct -> length << " inches\n";
	delete pstrct;
	return 0;
}
