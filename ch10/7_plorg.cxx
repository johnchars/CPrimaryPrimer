#include <iostream>
#include "plorg.h"

int main() {
	plorg chai;
	chai.show();
	int num;
	std::cout << "Enter a number to modify : ";
	std::cin >> num;
	std::cin.get();
	chai.modify(num);
	chai.show();
	plorg xu("xu mengying", 99);
	xu.show();
	return 0;	
}
