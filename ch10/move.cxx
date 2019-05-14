#include "move.h"
#include <iostream>

Move::Move(double a, double b){
	x = a;
	y = b;
}

void Move::showmove() const {
	using std::cout;
	cout << "x: " << x << ", y: " << y << std::endl;	
}

Move Move::add(const Move & m) const {
	Move temp;
	temp.y = y+ m.y;
	temp.x = x+ m.x;
	return temp;
}

void Move::reset(double a, double b){
	x = a;
	y = b;
}
