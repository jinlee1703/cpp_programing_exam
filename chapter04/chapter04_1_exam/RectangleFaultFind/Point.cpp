#include <iostream>
#include "Point.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos) {
	if (xpos < 0 || ypos < 0) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}

	x = xpos;
	y = ypos;
	return true;
}

int Point::Getx() const {	//const 함수!
	return x;
}

int Point::GetY() const {	//const 함수에 대해서는 잠시 후 설명
	return y;
}

bool Point::SetX(int xpos) {
	if (x > xpos || xpos > 100) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool Point::SetY(int ypos) {
	if (y > ypos || ypos > 100) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	y = ypos;
	return true;
}