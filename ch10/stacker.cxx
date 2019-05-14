#include <iostream>
#include "stack.h"
#include <cctype>

int main() {
	using namespace std;
	Stack st;
	char ch;
	customer po;
	double sumPo=0.0;
	cout << "please enter A to add a customer info, \n"
		<< "P to process a PO, or Q to quiet.\n";
	while (cin >> ch && toupper(ch) != 'Q'){
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch)){
			cout << '\a';
			continue;
		}
		switch(ch) {
			case 'A':
			case 'a': cout << "Enter a PO struct to add:\n ";
				  cout << "customer fullname : ";
				  cin.getline(po.fullname,35);
				  cout << "customer payment: ";
				  cin >> po.payment;
				  while( cin.get() !='\n')
					  continue;
				  if (st.isfull())
					  cout << "Stack already full\n";
				  else st.push(po);
				  break;
			case 'P':
			case 'p': if (st.isempty())
					  cout << "stack already empty\n";
				  else {
					st.pop(po);
					cout << "PO info #" << po.fullname
					       << ", " << po.payment << " popped\n";
					sumPo += po.payment;
				  }
				  break;
		}
		cout << "Please enter A to add a customer info,\n"
			<< "P to process a PO, or Q to quit.\n";
	}
	cout << "Bye\n";
	return 0;
}
