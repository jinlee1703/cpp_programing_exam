#include "main.h"

void BestComImp1::SimpleFunc(void) {
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	PrettyFunc();					//���� �̸�����
	ProgComImp1::SimpleFunc();		//�ٸ� �̸�����
}

void BestComImp1::PrettyFunc(void) {
	std::cout << "So Pretty!!" << std::endl;
}

void ProgComImp1::SimpleFunc(void) {
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}