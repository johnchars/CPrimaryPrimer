#include <iostream>
#include "golf.h"
#include <cstdlib>

extern const int Len;
const int N = 3;
int main(){
	golf ann,andy,garr[N];
	ann.setgolf("Ann Birdfree", 24);
	/*if (setgolf(andy)==0)
		exit(EXIT_FAILURE);
*/
	std::cout << "Modify andy's datas\n";
	andy.setgolf();
	std::cout << "Enter resetting handicap: ";
	int reset;
	std::cin >> reset;
	while (std::cin.get() != '\n'){
		std::cout << "Type enter to terminate:";
	}
	std::cout << "Next continue\n";
	andy.handicap(reset);
	andy.showgolf();

	static int count = 0;
	for (int i=0; i<N; i++){
		//static int count = 0;
		//garr[i].setgolf();
		if ( garr[i].setgolf() == 0){
			std::cout << "Empty string typed\n";
			break;
		}
//		static int count=0;
		count ++;
	}

	for (int i=0; i<count; i++){
		garr[i].showgolf();
	}
}
