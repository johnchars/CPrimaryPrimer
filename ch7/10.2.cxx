#include <iostream>

double subtract(double x, double y);
double add(double x, double y);
double calculate( double a, double b, double (*pf)(double x, double y));
void Fbig(double m, double n, double calculate(double a, double b,
			double (*pf)(double x, double y)));

//int i=0;
int main(){
	using namespace std;
	cout << "Enter 2 number to calculate Sum.\n";
	double a,b;
	cin >> a >> b;
	double q = calculate(a,b,add);
	cout << "q is: " << q << endl;
	Fbig(a,b,calculate);
	return 0;
}

double add(double x, double y){
	return x + y;
}

double subtract(double x,double y){
	return x - y;
}

double calculate( double a, double b, double (*pf)(double x, double y)){
	return pf(a,b);
}

void Fbig(double m, double n,
		double calculate(double a, double b, double (*pf)(double x, double y))){
	using namespace std;
	//int i=0;
//	cout << "\n Recurs compute!\n";
	cout << "M is: " << m << "\t";
	cout << "N is: " << n << "\t";
	cout << "Sum is: " << calculate(m,n,add) << endl;
	cout << "Substraction is: " << calculate(m,n,subtract) << endl;
	cout << "Enter two numbers to compute.\n";
	cout <<  "Recurs: " ;
	double p,q;
	cin >> p >> q;
	cout << "p is: " << p << "q is: " << q << endl;
// Condition to stop recurs
	if (cin){
		//i++;
		Fbig(p,q,calculate);
	}
//	while( cin.get() !='\n')
//		continue;
//	cout << "Sum is: " << calculate(p,q,add) << endl;
//	cout << "Subtraction is: " << calculate(p,q,subtract) << endl;

//	Fbig(q,p,calculate);

}
