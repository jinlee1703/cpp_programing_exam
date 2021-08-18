#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}
    
    void ShowAreaInfo() {
        cout << width << " " << height;
    }
};

class Square : public Rectangle {

};

int main(void) {
    Rectangle rec(4, 3);
    rec.ShowAreaInfo();
    return 0;
}