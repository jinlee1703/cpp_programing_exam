[문제 1] 키워드 const의 의미
	const int num = 10;
	- 변수 num을 상수화
	const int *ptr1 = &val1;
	- 포인터ptr1을 이용해서 val1의 값을 변경할 수 없음
	int *const ptr2 = &val2;
	-포인터 ptr2가 상수화 됨
	const int *const ptr3 = &val3;
	- 포인터 ptr3가 상수화 되었으며, ptr3를 이용해서 val3의 값을 변경할 수 없음

[문제 2] 실행중인 프로그램의 메모리 공간
	데이터 : 전역변수가 저장되는 영역
	스택 : 지역변수 및 매개변수가 저장되는 영역
	힙 : malloc 함수호출에 의해 프로그램이 실행되는 과정에서 동적으로 할당이 이뤄지는 영역
	malloc & free : malloc 함수호출에 의해 할당된 메모리 공간은 free 함수호출을 통해서 소멸하지 않으면 해제되지 않는다.

[문제 3] Call-by-value vs. Call-by-reference
	void SwapByValue(int num1, int num2) {
		int temp = num1;
		num1 = num2;
		num 2 = temp;
		//Call-by-value
	}

	void SwapByValue(int *ptr1, int *ptr2) {
		int temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		//Call-by-reference
	}