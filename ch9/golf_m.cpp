#include <iostream>
#include "golf.h"
#include <cstdlib>

extern const int Len;
const int N = 3;
int main(){
	golf ann,andy,garr[N];
	setgolf(ann, "Ann Birdfree", 24);
	if (setgolf(andy)==0)
		exit(EXIT_FAILURE);

	std::cout << "Enter resetting handicap: ";
	int reset;
	std::cin >> reset;
	while (std::cin.get() != '\n'){
		std::cin.get();
		std::cout << "Type enter to terminate:";
	}
	std::cout << "Next continue\n";
	handicap(andy,reset);
	static int count = 0;
	for (int i=0; i<N; i++){
		//static int count = 0;
		if ( setgolf(garr[i]) == 0){
			std::cout << "Empty string typed\n";
			break;
		}
//		static int count=0;
		count ++;
	}

	for (int i=0; i<count; i++){
		showgolf(garr[i]);
	}
}
