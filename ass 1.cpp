#include <iostream>

using namespace std;

class Base {
public:
    
    virtual void show() const = 0;

    
};

class Derv1 : public Base {
public:
    
    void show() const override {
        cout << "Message from Derv1" << endl;
    }
};

class Derv2 : public Base {
public:
    
    void show() const override {
        cout << "Message from Derv2" << endl;
    }
};

int main() {
    
    Derv1 d1;
    Derv2 d2;


    Base* arr[2];
    arr[0] = &d1;
    arr[1] = &d2;

    
    for (int i = 0; i < 2; ++i) {
        arr[i]->show();
    }

    return 0;
}
