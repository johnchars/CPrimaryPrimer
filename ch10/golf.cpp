#include <iostream>
#include <cstring>
#include "golf.h"

using namespace std;

golf::golf(const char* name, int hc){
	strcpy(m_fullname,name);
	m_handicap = hc;
	cout << "Setgolf fullname is: " << m_fullname << " , handicap is: "
		<< m_handicap << endl;
}

golf::golf(){
	m_fullname[0] = '\0';
	m_handicap = 0;
}

int golf::setgolf(){
	extern const int Len;
	int result = 0;
	cout << "Enter golfer's fullname: ";
	cin.getline(m_fullname,Len);
	if ( strlen(m_fullname)  )
		result = 1;
	cout << "Enter golfer's handicap: ";
	cin >> m_handicap;
	while (cin.get()!='\n')
		cin.get();
	return result;
}

void golf::handicap(int hc){
	cout << "Process will reset " << m_fullname << "'s handicap to " 
		<< hc << ". original is " << m_handicap << endl;
	m_handicap = hc;
}

void golf::showgolf() const {
	cout << "The info about is: \n";
	cout << "Name is: " << m_fullname << ", Handicap is: " << m_handicap << endl;
}

golf & golf::setgolf(const char* name, int hc) {
	extern const int Len;
	//char fn[Len];
	//int hcap;
	//cout << "Enter fullname & handicap ";
	//cin.getline(fn,Len) >> hcap;
	//cin.get();
	*this = golf(name,hc);
	return *this;
}
