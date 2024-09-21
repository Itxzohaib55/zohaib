#include <iostream>

using namespace std;
class Vehicle {
public:
    
    virtual int getNumberOfWheels() = 0;

    // Virtual destructor for proper cleanup
    virtual ~Vehicle() {}
};


class Car : public Vehicle {
public:
    
    int getNumberOfWheels()  override {
        return 4; 
    }
};

class Bike : public Vehicle {
public:
    
    int getNumberOfWheels() override {
        return 2;
    }
};

int main() {
    
    Car myCar;
    Bike myBike;

    Vehicle* vehicles[2];
    vehicles[0] = &myCar;
    vehicles[1] = &myBike;
    for (int i = 0; i < 2; ++i) {
        cout << "Number of wheels: " << vehicles[i]->getNumberOfWheels() << endl;
    }

    return 0;
}
