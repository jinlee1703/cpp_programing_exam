#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
	char text[100];
	char text2[100];

	cout << "���ڿ� �Է� : ";
	cin >> text;
	cout << "-------------------------------------" << endl;
	cout << "���ڿ��� ���� : " << strlen(text) << endl;
	strcat(text, "��");
	cout << "���ڿ��� �� �߰� : " << text << endl;
	strcpy(text2, text);
	cout << "���ڿ��� ������(������ 0) : " << strcmp(text, text2) << endl;

	return 0;
}