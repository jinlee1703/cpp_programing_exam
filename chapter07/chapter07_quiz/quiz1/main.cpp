#include <iostream>
using namespace std;

//�⺻ ���� �ڵ���
class Car {	
private:
	int gasolineGauge;
public:
	//������(���� ��)
	Car(int gauge) : gasolineGauge(gauge) {}
	
	int GetGasGauge() {
		return gasolineGauge;
	}
};

//���̺긮�� �ڵ���
class HybridCar : public Car {
private:
	int electricGauge;
public:
	//������(���� ��)
	HybridCar(int gauge1, int gauge2)
		: Car(gauge1), electricGauge(gauge2) {}

	int GetElecGauge() {
		return electricGauge;
	}
};

//���̺긮�� ����ī
class HybridWaterCar : public HybridCar {
private:
	int waterGauge;
public:
	//������(���� ��)
	HybridWaterCar(int gauge1, int gauge2, int gauge3)
		: HybridCar(gauge1, gauge2), waterGauge(gauge3) {}

	void ShowCurrentGauge() {
		cout << "�ܿ� ���ָ�: " << GetGasGauge() << endl;
		cout << "�ܿ� ���ⷮ: " << GetElecGauge() << endl;
		cout << "�ܿ� ���ͷ�: " << waterGauge << endl;
	}
};

int main(void) {
	HybridWaterCar car1(10, 20, 30);
	car1.ShowCurrentGauge();

	return 0;
}