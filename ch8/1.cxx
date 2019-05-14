#include <iostream>

int Count = 0;
void show(const char* pstr, int x=0);

int main(){
	using namespace std;
	//using std::endl;
	const int Size = 20;
	char cstring[Size];
	cout << "Enter a string to show.\n";
	//cin >> cstring;
	cin.getline(cstring,Size);
	//cin.get();
	show(cstring);
	show(cstring);
	show(cstring,1);

	return 0;
}

void show(const char* pstr, int x){
	using namespace std;
//	Count++;
	if (x == 0)
		cout << "Print one time: " << pstr << endl;
	else	for (int i=0; i<Count; i++){
			cout <<"Print "<< i << ": " << pstr << endl;
		}	
	Count++;
}
