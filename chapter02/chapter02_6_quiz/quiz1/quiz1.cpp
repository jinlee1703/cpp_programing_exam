#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
	char text[100];
	char text2[100];

	cout << "문자열 입력 : ";
	cin >> text;
	cout << "-------------------------------------" << endl;
	cout << "문자열의 길이 : " << strlen(text) << endl;
	strcat(text, "★");
	cout << "문자열에 ★ 추가 : " << text << endl;
	strcpy(text2, text);
	cout << "문자열이 같은지(같으면 0) : " << strcmp(text, text2) << endl;

	return 0;
}