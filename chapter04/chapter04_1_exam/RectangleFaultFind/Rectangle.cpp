#include <iostream>
#include "Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(const Point &ul, const Point &lr) {
	if (ul.Getx() > lr.Getx() || ul.GetY() > lr.GetY()) {
		cout << "�߸��� ��ġ���� ����" << endl;
		return false;
	}
	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::ShowRectInfo() const {
	cout << "�� ���: " << '[' << upLeft.Getx() << ", ";
	cout << upLeft.GetY() << ']' << endl;
	cout << "�� �ϴ�: " << '[' << lowRight.Getx() << ", ";
	cout << lowRight.GetY() << ']' << endl;
}