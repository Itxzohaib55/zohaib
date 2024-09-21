#include <iostream>
#include <cmath> // For M_PI constant

using namespace std;

class Shape {
public:
    
    virtual void draw()  = 0;
    virtual double getArea() = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    
    Circle(double r) : radius(r) {}

    void draw()  override {
        cout << "Drawing a Circle with radius " << radius << endl;
}
    double getArea() override {
        return M_PI * radius * radius;
    }
};
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}
    void draw() override {
        cout << "Drawing a Rectangle with width " << width << " and height " << height << endl;
    }


    double getArea() override {
        return width * height;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    
    Triangle(double b, double h) : base(b), height(h) {}

    void draw() override {
        cout << "Drawing a Triangle with base " << base << " and height " << height << endl;
    }

    
    double getArea()  override {
        return 0.5 * base * height;
    }
};

int main() {
    
    Circle myCircle(5.0);        
    Rectangle myRectangle(4.0, 6.0); 
    Triangle myTriangle(3.0, 7.0);  
    Shape* shapes[3];
    shapes[0] = &myCircle;
    shapes[1] = &myRectangle;
    shapes[2] = &myTriangle;

    for (int i = 0; i < 3; ++i) {
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->getArea() << endl;
        cout << endl; 
    }

    return 0;
}
