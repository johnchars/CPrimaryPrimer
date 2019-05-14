#include <iostream>
#include "list.h"

void ergodic(Item & num); //遍历列表元素

int main() {
	List list;
	if (list.isEmpty()){
		for (int i=0; i< M; i++)
			list.add(i+1);
	}
	else list.visit(ergodic);
	list.visit(ergodic);
	return 0;

}

void ergodic(Item & num)  {
	using namespace std;
	cout << "List data is: \n";
	int i=0;
	while ( *(&num+i) != '\0'){
		cout << *(&num+ (i++)) << ", ";
	}
	cout << endl << "Ergodic terminated!\n"; //这里的方式参考数组和指针并不相同
	// C专家编程内容
}
