#include <iostream>
#include "move.h"

int main() {
	using namespace std;
	double x,y;
	cout << "Enter coordination (x,y) \n";
	cin >> x >> y;
	while (cin.get() != '\n')
		continue;
	Move cxy(x,y);
	Move c2 = Move(x,y);
	cxy.showmove();
	c2.showmove();
	c2 = cxy.add(c2);
	c2.showmove();
	cout << "Reset c2, enter (x,y))\n";
	cin >> x >> y ;
	while (cin.get() != '\n')
		continue;
	c2.reset(x,y);
	c2.showmove();
	return 0;
}
