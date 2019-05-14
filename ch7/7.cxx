#include <iostream>
const int Max=5;
double* fill_array(double ar[], int limit);
void show_array(double ar[], const double* ending);
void revalue(double r, double ar[], double* ending);

int main(){
	using namespace std;
	double properties[Max];
	double* Pending=NULL;

	Pending = fill_array(properties,Max);
	show_array(properties,Pending);
	if ( Pending - properties <= 0){
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor)){
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; please enter a number: ";
		}
		revalue(factor, properties, Pending);
		show_array(properties, Pending);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;

}

double* fill_array(double ar[], int limit){
	using namespace std;
	double* temp;
	temp = ar;
	int i;
	for (i=0; i < limit; i++){
		cout << "Enter value #" << (i+1) << ": ";
		cin >> *temp;
		if (!cin){
			cin.clear();
			while (cin.get() !='\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if ( *temp < 0)
			break;
		temp ++;
	}
	return temp;
}
void show_array(double ar[], const double* ending){
	using namespace std;
	double* temp;
	int i=1;
	temp = ar;
	while ( temp < ending){
		cout << "Property #" << i << ": $";
		cout << *temp << endl;
		temp++;
		i++;
	}
}
void revalue(double r, double ar[], double* ending){
	double* temp=ar;
	while (temp < ending){
		*temp *= r;
		temp ++;
	}
	
}
