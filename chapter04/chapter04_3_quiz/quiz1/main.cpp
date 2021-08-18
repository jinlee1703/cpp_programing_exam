#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	//void Init(int x, int y) {
	//	xpos = x;
	//	ypos = y;
	//}
	/*Point(int x, int y) {
		xpos = x;
		ypos = y;
	}*/
	Point(int x, int y): xpos(x), ypos(y) {}
	void ShowPointInfo() const {
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle {
private:
	Point center;
	int radius;
public:
	Circle(int x, int y, int r) : center(x, y) {
		radius = r;
	}
	void ShowCircleInfo() const {
		cout << "radius: " << radius << endl;
		center.ShowPointInfo();
	}
};

class Ring {
private:
	Circle c1;
	Circle c2;
public:
	/*void Init(int x1, int y1, int r1, int x2, int y2, int r2) {
		c1.Init(x1, y1, r1);
		c2.Init(x2, y2, r2);
	}*/
	Ring(int x1, int y1, int r1, int x2, int y2, int r2)
		:c1(x1, y1, r1), c2(x2, y2, r2) {}
	void ShowRingInfo() const {
		cout << "Inner Circle Info..." << endl;
		c1.ShowCircleInfo();
		cout << "Outter Circle Info..." << endl;
		c2.ShowCircleInfo();
	}
};

int main(void) {
	Ring ring(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();

	return 0;
}