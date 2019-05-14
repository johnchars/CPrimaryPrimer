#include <iostream>
unsigned long iteration( int n);
int main(){
	using namespace std;
	int number;
	cout << "Enter number to computer product: \n";
	cin >> number;
	cout << "Result is : " << iteration( number) << endl;
	return 0;
}
unsigned long iteration( int n){
	unsigned long product=1;
	if (n>1)
		product = n * iteration(n-1);
	return product;
}
