#include <iostream>
int main(){
	using namespace std;
	int minor,max,sum;
	cout << " Enter a number(minor\n";
	cin >> minor;
	cout << " Enter another number(max)\n";
	cin >> max;
	sum = 0;
	for (int i=minor;i<max;++i)
		sum += i;
	sum +=max;
	cout << "Sum of the number between" << minor <<" and " << max 
		<< "is " << sum << endl;
	return 0;
}
