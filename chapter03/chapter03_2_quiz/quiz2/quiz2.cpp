#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Printer {
private:
	char str[255];

public:
	void SetString(const char myStr[255]);
	void ShowString(void);
};

void Printer::SetString(const char myStr[255]) {
	strcpy(str, myStr);
}

void Printer::ShowString(void) {
	cout << str << endl;
}

int main(void) {
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();
	return 0;
}