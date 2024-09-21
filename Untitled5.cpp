#include <iostream>

using namespace std;

class Shape {
public:
    
    virtual double calculateArea() = 0;

};

class Square : public Shape {
private:
    double sideLength;

public:
    
    Square(double side) : sideLength(side) {}


    double calculateArea()  override {
        return sideLength * sideLength;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    
    Triangle(double b, double h) : base(b), height(h) {}
    double calculateArea()  override {
        return 0.5 * base * height;
    }
};

int main() {
    
    Square mySquare(4.0);       
    Triangle myTriangle(3.0, 5.0); 
    Shape* shapes[2];
    shapes[0] = &mySquare;
    shapes[1] = &myTriangle;

  
    for (int i = 0; i < 2; ++i) {
        cout << "Area: " << shapes[i]->calculateArea() << endl;
    }

    return 0;
}
