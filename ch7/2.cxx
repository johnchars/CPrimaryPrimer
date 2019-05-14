#include <iostream>

void input(double* goal, int size);
void show(const double goal[]);
double average( const double goal[]);
int main(){
	using namespace std;
	const int size = 10;
	double golf[size];
	input(golf,size);
	show(golf);
//	cout << " q goal is: " << golf[0] << endl;
	cout << "Average is:" <<  average(golf) << endl;
	return 0;
}

void input(double* goal, int size){
	std::cout << "Enter golf goals(max is 10 )\n";
	std::cout << "enter q to terminate process.\n";
	for ( int i=0; i<size; i++){
		std::cin >> goal[i];
		std::cout << "fail state:" << std::cin.fail() << std::endl;
		if ( std::cin.fail()){
			goal[i] = '\0';
			break;

		}
	}
}
void show(const double goal[]){
	std::cout << "Show current golf goals\n";
	while (*goal !='\0'){
		std::cout << *goal <<std::endl;
		goal++;
	}
}
double average( const double goal[]){
	double result = 0;
	std::cout << "golf goal is: " << goal[0] << std::endl;
	int i=0;
	if ( *goal == '\0')
		return 0;
	while ( goal[i] != '\0'){
		result += goal[i];
		std::cout << " golf goal is: " << goal[i] << std::endl;
		i++;
	}
	return result / i;

}
