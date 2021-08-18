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
	cout << "기존 num1의 값 : " << num1 << endl;
	cout << "기존 num2의 값 : " << num2 << endl;

	increaseFunc(num1);
	increaseFunc(num2);
	cout << "num1 + 1의 값 : " << num1 << endl;
	cout << "num2 + 1의 값 : " << num2 << endl;

	changeSignFunc(num1);
	changeSignFunc(num2);
	cout << "부호가 변경된 num1 : " << num1 << endl;
	cout << "부호가 변경된 num2 : " << num2 << endl;
	return 0;
}