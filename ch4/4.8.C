#include <iostream>
#include <string>
int main(){
	using namespace std;
	struct Pizza{
		string brand;
		float diameter;
		float weight;
	};
	Pizza* pp = new Pizza;
	
	cout << "Enter Pizza's manufacture name\n";
	getline(cin, pp->brand);
	cout << "Enter Pizza's diameter \n";
	cin >> pp->diameter;
	cout << "Enter Pizza's weight \n";
	cin >> pp ->weight;
	
	cout << "A diameter is  " << pp->diameter << ", weight is "
	       	<<pp-> weight << " Pizza"
		<< ". Manufactured by " << pp-> brand << endl;
	delete pp;
	return 0;
}
