[���� 1] Ű���� const�� �ǹ�
	const int num = 10;
	- ���� num�� ���ȭ
	const int *ptr1 = &val1;
	- ������ptr1�� �̿��ؼ� val1�� ���� ������ �� ����
	int *const ptr2 = &val2;
	-������ ptr2�� ���ȭ ��
	const int *const ptr3 = &val3;
	- ������ ptr3�� ���ȭ �Ǿ�����, ptr3�� �̿��ؼ� val3�� ���� ������ �� ����

[���� 2] �������� ���α׷��� �޸� ����
	������ : ���������� ����Ǵ� ����
	���� : �������� �� �Ű������� ����Ǵ� ����
	�� : malloc �Լ�ȣ�⿡ ���� ���α׷��� ����Ǵ� �������� �������� �Ҵ��� �̷����� ����
	malloc & free : malloc �Լ�ȣ�⿡ ���� �Ҵ�� �޸� ������ free �Լ�ȣ���� ���ؼ� �Ҹ����� ������ �������� �ʴ´�.

[���� 3] Call-by-value vs. Call-by-reference
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