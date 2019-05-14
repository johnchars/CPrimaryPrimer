#include <iostream>
#include <cstring>

const int strSize=20;
const int size = 5;
struct bop {
	char fullname[strSize];
	char title[strSize];
	char bopname[strSize];
	int preference;
};
struct bop man[size];
void interface();
void fullname(int size);
void title(int size);
void bopname(int size);
void preference(int size);

int main(){
	using namespace std;
//	const int size = 5;
	char ch;
	strcpy(man[0].fullname,"Wimp Macho");
        strcpy(man[0].title,"A level");
	strcpy(man[0].bopname,"Lion");
	man[0].preference= 0;
	
	strcpy(man[1].fullname,"Raki Rhodes");
        strcpy(man[1].title,"B level");
	strcpy(man[1].bopname,"Tiger");
	man[1].preference= 1;

	strcpy(man[2].fullname,"Celia Laiter");
        strcpy(man[2].title,"C level");
	strcpy(man[2].bopname,"Cat");
	man[2].preference= 2;

	strcpy(man[3].fullname,"Hoppy Hipman");
        strcpy(man[3].title,"D level");
	strcpy(man[3].bopname,"Dog");
	man[3].preference= 2;

	strcpy(man[4].fullname,"Pat Hand");
        strcpy(man[4].title,"E level");
	strcpy(man[4].bopname,"Dragon");
	man[4].preference= 1;
	

	int flag = true;
	while (flag){
		interface();
		cin.get(ch);
		cin.get();
		switch (ch){
			case 'a': fullname(size);
				  break;
			case 'b': title(size);
				  break;
			case 'c': bopname(size);
				  break;
			case 'd': preference(size);
				  break;
			case 'q': flag = false;
	
		}
	}
	return 0;
}

void fullname(int size){
	for (int i=0; i<size; i++){
		std::cout << man[i].fullname << std::endl;

	}
}
void title(int size){
	for (int i=0; i<size; i++){
		std::cout << man[i].title << std::endl;
	}
}
void bopname(int size){
	for (int i=0; i<size; i++){
		std::cout << man[i].bopname << std::endl;
	}
}
void preference(int size){
	for (int i=0; i<size; i++){
		switch (man[i].preference){
			case 0: std::cout << man[i].fullname << std::endl;
		break;
			case 1: std::cout << man[i].title << std::endl;
				break;
			case 2: std::cout << man[i].bopname << std::endl;
	}

	}
}
void interface(){
	std::cout << "Benevolent Order of Programmers Report\n";
	std::cout << "a. display by name   \t b. display by title\n";
	std::cout << "c. display by bopname\t d. display by preference\n";
	std::cout << "q. quit\n";
}
