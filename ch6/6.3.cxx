#include <iostream>
void interface();
int main() {
	using namespace std;
	char ch;
	int flag = 1;
	interface();
	cin.get(ch);
	cout << "ch is " << ch << endl;
	cin.get();
	while (flag){
		switch (ch){
			case 'c': cout<<"A carnivore is an animal"
				 << " that eats meat.\n";
			 	break;
			case 'p': cout << "A pianist is a person who"
				 << " plays the piano.\n";
				  break;
			case 't': cout << "A maple is a tree\n";
				 break;
			case 'g': cout << "A game is a trick for entertainment\n";
				  break;
			case 'f': flag = 0; continue; 
			//	  break;
			//default : interface();
		}
		interface();
		cin.get(ch);
		cin.get();
		cout << "ch is " << ch << endl;
	}
	return 0;
}
void interface(){
	std::cout << "Please enter one of the following choices:\n"
	<<"c) carnivore\t\t\tp) pianist\n"
	<<"t) tree     \t\t\tg) game\n"
	<<"f) force\n";
}
