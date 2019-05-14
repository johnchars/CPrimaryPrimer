#include <iostream>
#include <vector>
int main(){
	using namespace std;
	cout << "Enter a positive number\n";
	int counter;
	cin >> counter;
	cout << "System will create an array contented " <<counter<<" elements\n"; 

	vector<int> A(counter);
	cout << " Enter numbers into created array\n";
	for(int i=0; i<counter;i++)
		cin >>A[i];
	cout << "array =\n ";
	
	for(int i=0;i<counter;i++)
	      cout<< A[i] << endl;
	//delete pn;
	return 0;

}
