#include <iostream>
int main(){
	using namespace std;
	const int Year=3;
	const int Month=2;
	int book[Year][Month],
		sumRaw[Year]={0},sumCol[Month]={0};
	int random = 10;
	for (int i=0; i<Year; i++)
		for ( int j=0; j<Month; j++){
			book[i][j] = random;
		        random += 25;	
		}
	for ( int i=0; i<Year; i++){
		for ( int j=0; j<Month; j++){
			cout << book[i][j] << "\t";
			sumRaw[i] += book[i][j];
		}
		cout << endl;
	}
	for (int i=0;i<Month; i++){
		for ( int j=0; j< Year; j++){
			sumCol[i] += book[i][j];
			cout << "Raw sum " << sumRaw[j] << endl;
		}

		cout <<"Colum sum" <<  sumCol[i]<< endl;
	}

	return 0;
		
}
