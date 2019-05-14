#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
	struct 	Patrons{
		string name;
		double money;
	};
	
	int size,j=0;
	ifstream inFile;
	char filename[60];
	cout << "Enter file name wanted opened\n";
	//getline(cin,filename);
	cin.getline(filename,60);
	inFile.open(filename);
	if (!inFile.is_open()){
		cout << "Could not open " << filename << " file\n";
		cout << "Program terminate\n";
		exit(EXIT_FAILURE);
	}
	
	cout << "Reading array size from "<< filename << endl;
        inFile>>size;
	inFile.get();
	int record[size];
//	record[0] = -1;
	cout << "dynamic size is " << size << endl;
	Patrons* pp = new Patrons[size];
	for (int i=0; i<size;i++){
		getline(inFile,(pp+i)->name);
		inFile >> (pp+i)->money;
	//	cout << "Read file result: \n";
	//	cout << (pp+i)->name << endl << (pp+i)->money << endl;
		inFile.get();
	}
	if (inFile.eof())
		cout << "End of file reached.\n";
	else if ( inFile.fail())
		cout << "Input terminated by data mismatch.\n";
	else cout << "Input terminated for Unknown reason.\n";
	inFile.close();
	
	cout << "Grand Patrons:\n";
	for (int i=0;i<size;i++){
		if ( (pp+i)->money >10000)
			cout << (pp+i)->name << endl << (pp+i)->money << endl;
		else record[j++] = i;
	}
	cout << "Patrons:\n";
	j=0;
	//cout << record[0] << endl;
	//for (int i=0;i<size;i++)
	//	cout << "record "<< i<< " : " << record[i] << endl;
	while ( record[j] >= 0){
		cout << (pp+record[j])->name << endl << (pp+record[j])->money << endl;
		j++;
	}
	delete [] pp;
	return 0;

}

