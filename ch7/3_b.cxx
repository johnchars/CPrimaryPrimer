#include <iostream>
struct box{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
float product(box* chai);
int main(){
	using namespace std;
	box chai = { "chaiWenJie", 20.12, 30.32, 20.1, 0};
	cout << product( &chai) << endl;
	return 0;
}
float product(box* chai){
	std::cout << "Computer cube volume!\n";
	std::cout << "Maker is: " << chai->maker << std::endl;
	return chai->height *  chai->width * chai->length;
}

