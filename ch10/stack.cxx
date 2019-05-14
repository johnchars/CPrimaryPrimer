#include "stack.h"
#include <cstring>

Stack::Stack(){
	top = 0;
}

/*Stack::Stack(const char* fn, double pyt){
	
}*/

bool Stack::isempty() const {
	return top == 0;
}

bool Stack::isfull() const {
	return top == MAX;
}

bool Stack::push(const customer & item){
	if (top < MAX){
		items[top++] = item;
		return true;
	}
	else return false;
}

bool Stack::pop( customer & item){
	if (top > 0){
		item = items[--top];
		return true;
	}
	else return false;
}
