#include <iostream>

using namespace std;

class Shape {
public:
    virtual void draw()  = 0;
};
class Circle : public Shape {
public:
	
    void draw()  override {
        cout << "Drawing a Circle" << endl;
    }
};
class Rectangle : public Shape {
public:
    
    void draw()  override {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    
    Circle myCircle;
    Rectangle myRectangle;

    
    Shape* shapes[2];
    shapes[0] = &myCircle;
    shapes[1] = &myRectangle;

    
    for (int i = 0; i < 2; ++i) {
        shapes[i]->draw();
    }

    return 0;
}
