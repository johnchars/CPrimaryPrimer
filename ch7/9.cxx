#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main(){
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	
	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for ( int i=0; i<entered; i++){
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);

	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";
	return 0;
}

int getinfo(student pa[], int n){
	//using namespace std;
	int count =0;
	cout << "Enter student data :\n";
	for (int i=0; i<n; i++){
		cout << i+1 << ": ";
		cout << "fullname\n";
		cin.getline((pa+i)->fullname,SLEN);
		if (cin)
			count++;
		else {
			cout << "invalid name type, terminate process\n";
			break;
		}
		cout << "hoppy\n";
		cin.getline((pa+i)->hobby,SLEN);
		cout << "level\n";
		cin >> (pa+i)->ooplevel;
		while ( cin.get() !='\n')
			continue;

	}
	return count;
}

void display1(student st){
	cout << "student info is: \n";
	cout << "Fullname: " << st.fullname << endl;
	cout << "Hobby: " << st.hobby << endl;
	cout << "Level: " << st.ooplevel << endl;
}

void display2(const student *ps){
	cout << "Student info is: \n";
	cout << "Fullname: " << ps->fullname << endl;
	cout << "Hobby: " << ps->hobby << endl;
	cout << "Level: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n){
	cout << "Student info is: \n";
	for (int i=0;i<n; i++){
		cout << i+1 << " : student info is: ";
		cout << "Fullname: " << pa[i].fullname << endl;
		cout << "Hobby: " << pa[i].hobby << endl;
		cout << "Level: " << pa[i].ooplevel << endl;
	}
}
