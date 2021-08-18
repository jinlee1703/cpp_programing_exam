#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS {
	enum { CLERK, SENIOR, ASSIST, MANAGER };

	void ShowPositionInfo(int pos) {
		switch (pos)
		{
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
			break;
		}
	}
}

class NameCard {
private:
	char *name;
	char *comp;
	char *tel;
	int pos = 0;

public:
	NameCard(const char *_name, const char *_comp, const char *_tel, int _pos) :pos(_pos) {
		name = new char[strlen(_name) + 1];
		strcpy(name, _name);
		comp = new char[strlen(_comp) + 1];
		strcpy(comp, _comp);
		tel = new char[strlen(_tel) + 1];
		strcpy(tel, _tel);
	}

	NameCard(const NameCard &copy) : pos(copy.pos) {
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
		comp = new char[strlen(copy.comp) + 1];
		strcpy(comp, copy.comp);
		tel = new char[strlen(copy.tel) + 1];
		strcpy(tel, copy.tel);
	}

	void ShowNameCardInfo() {
		cout << "이름: " << name << endl;
		cout << "회사: " << comp << endl;
		cout << "전화번호: " << tel << endl;
		cout << "직급: "; COMP_POS::ShowPositionInfo(pos);
		cout << endl << endl;
	}

	~NameCard() {
		delete[] name;
		delete[] comp;
		delete[] tel;

		cout << "called destructor!" << endl;
	}
};

int main(void) {
	NameCard manCleck("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard copy1 = manCleck;
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2 = manSENIOR;
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();
	return 0;
}