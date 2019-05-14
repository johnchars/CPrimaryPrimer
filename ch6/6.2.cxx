#include <iostream>
#include <cctype>
int main(){
	using namespace std;
	const int Size = 10;
	double donation[Size];
	double sum=0,average;
	int i=0,count=0;
	cout << "Enter donation value into array.(end by non number type).\n";
	while ( cin>>donation[i]){
		sum += donation[i];
	        i++;	
	}
	if ( i == 0){
		cout << "no data!\n";
		average = 0;
	}
	else 
		average = sum / i;
	for (int j=0;j<i;j++)
		if ( donation[j] > average)
			count++;
	cout << "average is " << average << " Bigger than :" 
		<< count << endl;
	return 0;
}
