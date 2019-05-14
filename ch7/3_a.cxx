#include <iostream>
struct box{
	float maker[40];
	float height;
	float width;
	float hength;
	float volume;
};
void show( const box content);
int main(){
	using namespace std;
	box chai;
	chai = { {20.2, 23.4, 26.9}, 32.3, 21.4, 40.3, 0};
	show(chai);
	return 0;
}

void show( const box content){
	std::cout << "show content !\n";
	std::cout << "maker is: " << content.maker << std::endl;
	std::cout << "height is: "<< content.height << std::endl;
	std::cout << "width is: "<< content.width << std::endl;
	std::cout << "hength is: " << content.hength<< std::endl;
	std::cout << "volume is: " << content.volume << std::endl;
}	
