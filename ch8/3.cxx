#include <iostream>
#include <string>
#include <cctype>
using std::string;

void Caps(string & rs);

int main(){
	using namespace std;
	cout <<"Enter a sring(q to quit): ";
	string cs;
	getline(cin,cs);
	while (cs[0] !='q'){
		Caps(cs);
		cout <<"Next string (q to quit): ";
		getline(cin,cs);
	}
	cout << "Bye.\n";
	return 0;
}

void Caps(string & rs){
	
	int len = rs.size();
//	char ch;
	for (int i=0; i<len; i++){
		rs[i] = toupper(rs[i]);
	}
	std::cout << rs << std::endl;
}
