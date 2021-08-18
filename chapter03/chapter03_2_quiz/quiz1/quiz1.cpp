#include <iostream>
using namespace std;

class CalCulator {
private:
	int num1;
	int num2;
	int count[4];

public:
	void Init(void);
	double Add(double n1, double n2);
	double Min(double n1, double n2);
	double Mul(double n1, double n2);
	double Div(double n1, double n2);
	void ShowOpCount(void);
};

void CalCulator::Init(void) {
	count[0] = 0;
	count[1] = 0;
	count[2] = 0;
	count[3] = 0;
}

double CalCulator::Add(double n1, double n2) {
	count[0]++;
	return n1 + n2;
}

double CalCulator::Min(double n1, double n2) {
	count[1]++;
	return n1 + n2;
}

double CalCulator::Mul(double n1, double n2) {
	count[2]++;
	return n1 + n2;
}

double CalCulator::Div(double n1, double n2) {
	count[3]++;
	return n1 + n2;
}

void CalCulator::ShowOpCount(void) {
	cout << "µ¡¼À: " << count[0] << " »¬¼À: " << count[1] << " °ö¼À: " << count[2] << " ³ª´°¼À: " << count[3] << endl;
}

int main(void) {
	CalCulator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 2.4) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	return 0;
}