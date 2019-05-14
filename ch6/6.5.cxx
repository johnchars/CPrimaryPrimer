#include <iostream>
float revenue(float salary);
int main(){
	using namespace std;
	float salary ;
	while (!cin.fail() && salary >0){
		cout << "Enter your salary, computing your renueve\n";
		cin >> salary;
		cout << "You should pay "<< revenue(salary) << " taxs\n";
	}

	return 0;

}

float revenue( float salary){
	float tax;
	if ( salary <= 5000 )
		tax = 0;
	else if ( salary <= 15000 )
		tax = (salary - 5000)* 0.1;
	else if ( salary <= 35000 ) 
		tax = 10000 * 0.1 + (salary - 15000) * 0.15;
	else tax = 10000 * 0.1 + 20000 *0.15 + salary * 0.2;
	return tax;	
}
