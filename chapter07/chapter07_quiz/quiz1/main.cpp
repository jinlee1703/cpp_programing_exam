#include <iostream>
using namespace std;

//기본 연료 자동차
class Car {	
private:
	int gasolineGauge;
public:
	//생성자(퀴즈 답)
	Car(int gauge) : gasolineGauge(gauge) {}
	
	int GetGasGauge() {
		return gasolineGauge;
	}
};

//하이브리드 자동차
class HybridCar : public Car {
private:
	int electricGauge;
public:
	//생성자(퀴즈 답)
	HybridCar(int gauge1, int gauge2)
		: Car(gauge1), electricGauge(gauge2) {}

	int GetElecGauge() {
		return electricGauge;
	}
};

//하이브리드 워터카
class HybridWaterCar : public HybridCar {
private:
	int waterGauge;
public:
	//생성자(퀴즈 답)
	HybridWaterCar(int gauge1, int gauge2, int gauge3)
		: HybridCar(gauge1, gauge2), waterGauge(gauge3) {}

	void ShowCurrentGauge() {
		cout << "잔여 가솔린: " << GetGasGauge() << endl;
		cout << "잔여 전기량: " << GetElecGauge() << endl;
		cout << "잔여 워터량: " << waterGauge << endl;
	}
};

int main(void) {
	HybridWaterCar car1(10, 20, 30);
	car1.ShowCurrentGauge();

	return 0;
}