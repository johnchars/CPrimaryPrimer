#include <iostream>
#include <string>

int main(){
	const int Size = 3;
	using namespace std;
	struct donation{
	string name;
	double money;	
	};
	int i,j;
	i=j=0;
	donation* parr = new donation[Size];
	for (int i=0; i<Size; i++){
		cout << "Enter " << i << " name\n";
		getline(cin,(parr+i)->name);
		cout << "Enter " << i << " fund.\n";
		cin >> (parr+i)->money;
		cin.get();
	}

	cout << "Grand Patrons\n";
	for (int m=0;m<Size;m++){
			if ((parr+m)->money >= 10000){
				i++;
				cout << (parr+m)->name<< " " << (parr+m)->money << endl;
			}
	}
//	parr = parr - Size -1;
	cout << parr->name<<endl;
	if ( i == 0)
		cout << "none\n";
	cout << "Patrons\n";
	for (int n=0;n<Size;n++){
			if ((parr+n)->money <10000){
				j++;
			cout << (parr+n)->name <<" " << (parr+n)->money << endl;
			}
	}
	if ( j==0)
		cout << "none\n";

//	parr = parr - Size-1;
	cout << parr->name << endl;
//	parr->name = "chaiwenjie";
//	parr->money = 200.0;

//	cout << parr->name << endl;
//	cout << parr->money << endl;
	delete [] parr;
	return 0;
}
