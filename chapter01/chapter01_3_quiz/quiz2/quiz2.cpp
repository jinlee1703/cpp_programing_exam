int SimpleFunc(int a = 10) {
	return a + 1;
}

int SimpleFunc(void) {
	return 10;
}

//SimpleFunc()로 호출하였을 때 두 함수 중 어떤 함수로 반환해야 되는지 구별이 되지 않는다(void형 매개변수와 매개변수의 Default값이 구별되지 않음)