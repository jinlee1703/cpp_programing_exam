#include <iostream>
using namespace std;

typedef struct __point {
	int xpos;
	int ypos;
} Point;

Point &PntAdder(const Point &p1, const Point &p2) {
	Point *pptr = new Point;
	pptr->xpos = p1.xpos + p2.xpos;
	pptr->ypos = p1.ypos + p2.ypos;
	return *pptr;
}

int main(void) {
	Point *pt1 = new Point;
	pt1->xpos = 3;
	pt1->ypos = 30;

	Point *pt2 = new Point;
	pt2->xpos = 70;
	pt2->ypos = 7;

	Point &pref = PntAdder(*pt1, *pt2);
	cout << "[" << pref.xpos << ", " << pref.ypos << "]" << endl;

	delete pt1;
	delete pt2;
	delete &pref;

	return 0;
}