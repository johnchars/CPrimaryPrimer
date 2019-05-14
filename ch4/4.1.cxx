#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	const int Size = 20;
	struct person{
		char firstname[Size];
		string lastname;
		char grade;
		int age;
	};
	person a;
	cout << "What is your first name?\n";
	cin.getline(a.firstname,Size);
	cout << "What is your last name\n";
	cin >> a.lastname;
	cout << " What letter grade you deserve? \n";
	cin >> a.grade;
	cout << " What is your age? \n";
	cin >> a.age;

	cout << "Name: " << a.firstname << ", " << a.lastname << endl;
	cout << "Grade: " << char(int(a.grade)+1) << endl;
	cout << "Age: " << a.age << endl;
	return 0;
}
