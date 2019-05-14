#include <iostream>
int main(){
	using namespace std;
	float Daphne,Cleo;
	int i=0;
	Daphne=Cleo=10000;
	while (Daphne >= Cleo ){
		Daphne += 10000 * 0.1;
		Cleo +=	Cleo*0.05;
		i++;	
	}
	cout << i << " years has been past, Daphne benefit"
		" is " << Daphne << endl;
	cout <<"Cleo benefit is " << Cleo << endl;
	return 0;
}
