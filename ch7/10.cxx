#include <iostream>

double add(double x, double y);
double calculate( double a, double b, double (*pf)(double x, double y));

int main(){
	using namespace std;
	cout << "Enter 2 number to calculate Sum.\n";
	double a,b;
	cin >> a >> b;
	double q = calculate(a,b,add);
	cout << "q is: " << q << endl;
	return 0;
}

double add(double x, double y){
	return x + y;
}

double calculate( double a, double b, double (*pf)(double x, double y)){
	return pf(a,b);
}
