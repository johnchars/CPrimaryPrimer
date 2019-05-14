#include <iostream>
const int Size = 20;
struct CandyBar {
	char brand[Size];
	double weight;
	int calorie;
};
void setCandy( CandyBar & candy, char* pc="Millenniium Munch",
	       	double weit=2.85, int cal=350); 
void show( const CandyBar & candy);

int main(){
	using namespace std;
	cout << "Enter Candy info:\n";
	CandyBar rabbit;
	cout << "Type brand: \n";
	char name[Size];
	double w;
	int c;
	cin.getline(name,Size);
	cout << "Type weight & calorie: \n";
	cin >> w >> c; 
	cin.get();
	cout << "Setting Candy Bar...\n";
	setCandy(rabbit,name,w,c);
	show(rabbit);
	return 0;
}

void setCandy( CandyBar & candy, char* pc,double weit, int cal){
	for (int i=0; i<Size && *pc !='\0'; i++){
		candy.brand[i] = *pc;
		pc++;
	}
	candy.weight = weit;
	candy.calorie = cal;
}

void show( const CandyBar & candy){
	using namespace std;
	cout << "Candy details!\n";
	cout << "Brand is: " << candy.brand << endl;
	cout << "Weight is: "<< candy.weight << endl;
	cout << "Calorie is: " << candy.calorie << endl;
}
