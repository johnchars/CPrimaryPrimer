#include <iostream>
int Fill_array(double array[], int size);
void show_array(const double array[], int size);
void Reverse_array(double array[], int size);

const int Size = 5;

int main(){
	using namespace std;
	double value[Size];
	int n;
	n = Fill_array( value, Size);
	cout << "fill array is:" << value << endl;
	show_array(value,n);
	Reverse_array( value, n);
	cout << " reverse array has been terminated!\n";
	show_array(value,n);
	return 0;
}
int Fill_array(double array[], int size){
	std::cout << "Enter double data into array.\n";
	int i=0;
	while (std::cin >> array[i] && i<size)
		i++;
	std::cout << "Completely type " << i << "words.\n";	
	return i;
}
void show_array(const double array[], int size){
	int i=0;
	while ( *(array+i) !='\0' && i<size){
		std::cout << *(array+i) << ' ';
		i++;
	}
}
void Reverse_array(double array[], int size){
	int mid = size /2 + 1;
	std::cout << "mid : " << mid << std::endl;
	double temp;
	for (int i=0; i<mid;i++){
		std::cout << "This is :" << i << " times chang" << std::endl;
		std::cout << i << ": " << array[size-i-1] << std::endl;
		std::cout << i << ": " << array[i] << std::endl;
		temp = array[size - i-1];
		array[size -i -1] = array [i];
		array[i] = temp;
	}
}