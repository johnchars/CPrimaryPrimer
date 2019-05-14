#include <iostream>
#include <cstring>

const int Len = 10;
const int N = 2;

int main(){
	using namespace std;
	struct chaff {
		char dross[20];
		int slag;
	};
	chaff big[Len];
	chaff* pc = new(big) chaff[2];
	cout << "Addree of big is : " << (void*)big << endl;
	cout << "Address of chaff[2] is: " << pc << endl;
	for (int i=0; i<N; i++){
		char temp[20];
		cout << "Enter a string to dross: ";
		cin.getline(temp,20);
		strcpy((pc+i)->dross,temp);
		cout << "Enter a number to slag: ";
		cin >> (pc+i)->slag ;
		while ( cin.get() != '\n' )
			cout << "Type enter to quit\n";
		
	}
	cout << "Chaff content is:\n ";
	for (int i=0; i<N; i++){
		cout << i << " : ";
		cout << (pc+i)->dross << " , " << (pc+i)->slag << endl;
	}
	return 0;
}
