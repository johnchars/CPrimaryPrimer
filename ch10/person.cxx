#include <iostream>
#include <string>
#include <cstring>
#include "person.h"

Person::Person(const string & ln, const char* fn){
	std::cout <<"#2 with on default argument\n";
	
	lname = ln;
	strncpy(fname,fn,24);
	fname[24]='\0';
}

void Person::Show() const {
	std::cout << "Call for show()\n";
	std::cout << "first name : " << fname << std::endl;
	std::cout << "Last name : " << lname << std::endl;
}

void Person::FormalShow() const {
	using std::cout;
	cout << "Formal format--lastname,firstname \n";
	cout << "last name : " << lname << std::endl;
	cout << "first name: " << fname << std::endl;
}
