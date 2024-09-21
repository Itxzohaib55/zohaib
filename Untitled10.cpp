#include <iostream>
#include <cmath> 

using namespace std;
class Shape {
public:
    
    virtual double area()  = 0;
    virtual double perimeter()  = 0;};

class Circle : public Shape {
private:
    double radius;

public:
   
    Circle(double r) : radius(r) {}

    
    double area()  override {
        return M_PI * radius * radius;
    }

    
    double perimeter()  override {
        return 2 * M_PI * radius;
    }
};


class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    
    Rectangle(double l, double w) : length(l), width(w) {}

    
    double area()  override {
        return length * width;
    }

   
    double perimeter()  override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double a;
    double b; 
    double c;

public:
    
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}

    
    double area()  override {
        double s = (a + b + c) / 2; // Semi-perimeter
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    
    double perimeter()  override {
        return a + b + c;
    }
};

int main() {
   
    Circle circle(5.0);    
    Rectangle rectangle(4.0, 6.0); 
    Triangle triangle(3.0, 4.0, 5.0); 
    Shape* shapes[3];
    shapes[0] = &circle;
    shapes[1] = &rectangle;
    shapes[2] = &triangle;
    for (int i = 0; i < 3; ++i) {
        cout << "Shape " << i + 1 << ":" << endl;
        cout << "Area: " << shapes[i]->area() << endl;
        cout << "Perimeter: " << shapes[i]->perimeter() << endl;
        cout << endl;
    }

    return 0;
}
