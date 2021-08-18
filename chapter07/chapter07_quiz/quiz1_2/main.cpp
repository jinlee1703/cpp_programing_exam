#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo {
private:
	char *name;
	int age;
public:
	//������(����)
	MyFriendInfo(const char *fName, int fAge)
		: age(fAge) {
		name = new char[strlen(fName) + 1];
		strcpy(name, fName);
	}

	void ShowMyFriendInfo() {
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}

	//�Ҹ���(����)
	~MyFriendInfo() {
		delete[] name;
	}
};

class MyFriendDetailInfo : public MyFriendInfo {
private:
	char *addr;
	char *phone;
public:
	//������(����)
	MyFriendDetailInfo(const char *fName, int fAge, const char *fAddr, const char *fPhone)
		: MyFriendInfo(fName, fAge) {
		addr = new char[strlen(fAddr) + 1];
		phone = new char[strlen(fPhone) + 1];
		strcpy(addr, fAddr);
		strcpy(phone, fPhone);
	}

	void ShowMyFriendDetailInfo() {
		ShowMyFriendInfo();
		cout << "�ּ�: " << addr << endl;
		cout << "��ȭ: " << phone << endl << endl;
	}

	//�Ҹ���(����)
	~MyFriendDetailInfo() {
		delete[] addr;
		delete[] phone;
	}
};

int main(void) {
	MyFriendDetailInfo f1("������", 24, "�뱸�� ���� ��ȭ�� 33�� 8-22 (�򸮵�)", "010-6695-6774");
	f1.ShowMyFriendDetailInfo();

	return 0;
}