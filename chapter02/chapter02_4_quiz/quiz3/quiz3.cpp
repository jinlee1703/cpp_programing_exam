#include <iostream>
using namespace std;

//temp를 포인터로 선언(책 정답)
void SwapPointer(int *(&ref1), int *(&ref2)) {
	int *temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

/*
//매개변수의 값(주소)을 변경
void SwapPointer(int *(&ref1), int *(&ref2)) {
	int temp = *ref1;
	*ref1 = *ref2;
	*ref2 = temp;
}
*/

int main(void) {
	int num1 = 5;
	int *ptr1 = &num1;
	int num2 = 10;
	int *ptr2 = &num2;
	cout << "기존 ptr1 포인터의 값 : " << *ptr1 <<endl;
	cout << "기존 ptr2 포인터의 값 : " << *ptr2 << endl;

	SwapPointer(ptr1, ptr2);
	cout << "교환 후 ptr1 포인터의 값 : " << *ptr1 << endl;
	cout << "교환 후 ptr2 포인터의 값 : " << *ptr2 << endl;

	return 0;
}