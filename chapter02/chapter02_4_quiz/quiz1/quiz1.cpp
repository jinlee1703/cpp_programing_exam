#include <iostream>
using namespace std;

void increaseFunc(int &ref) {
	ref++;
}

void changeSignFunc(int &ref) {
	ref *= -1;
}

int main(void) {
	int num1 = 10;
	int num2 = -20;
	cout << "���� num1�� �� : " << num1 << endl;
	cout << "���� num2�� �� : " << num2 << endl;

	increaseFunc(num1);
	increaseFunc(num2);
	cout << "num1 + 1�� �� : " << num1 << endl;
	cout << "num2 + 1�� �� : " << num2 << endl;

	changeSignFunc(num1);
	changeSignFunc(num2);
	cout << "��ȣ�� ����� num1 : " << num1 << endl;
	cout << "��ȣ�� ����� num2 : " << num2 << endl;
	return 0;
}