#include <iostream>

int main(void) {
	int normal = 50;
	int sales;

	while (1) {
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> sales;

		if (sales == -1) {
			std::cout << "���α׷��� �����մϴ�." << std::endl;
			break;
		}	

		sales *= 0.12;
		std::cout << "�̹� �� �޿�: " << normal + sales << "����" << std::endl;
	}

	return 0;
}