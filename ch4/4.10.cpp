#include <iostream>
#include <array>

int main(){
	using namespace std;
	array<float, 3> run;
	float average=0;
	for(int i=0; i< 3; i++){
		cout << "Enter your " << i+1 << "times record time\n";
		cin >> run[i];
		average += run[i]/3;
	}
	cout << "average is " << average << endl;
	return 0;

}
