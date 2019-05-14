#include <iostream>
#include <cstring>
#include "golf.h"

using namespace std;

void setgolf( golf & g, const char* name, int hc){
	strcpy(g.fullname,name);
	g.handicap = hc;
	cout << "Setgolf fullname is: " << g.fullname << " , handicap is: "
		<< g.handicap << endl;
}

int setgolf( golf & g){
	extern const int Len;
	int result = 0;
	cout << "Enter golfer's fullname: ";
	cin.getline(g.fullname,Len);
	if ( strlen(g.fullname)  )
		result = 1;
	cout << "Enter golfer's handicap: ";
	cin >> g.handicap;
	while (cin.get()!='\n')
		cin.get();
	return result;
}

void handicap( golf & g, int hc){
	cout << "Process will reset " << g.fullname << "'s handicap to " 
		<< hc << ". original is " << g.handicap << endl;
	g.handicap = hc;
}

void showgolf(const golf & g){
	cout << "The info about is: \n";
	cout << "Name is: " << g.fullname << ", Handicap is: " << g.handicap << endl;
}
