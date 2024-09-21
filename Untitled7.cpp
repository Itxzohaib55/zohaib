#include <iostream>
#include <string>

using namespace std;

class Fruit {
public:
    
    virtual void showDetails()  {
        cout << "This is a fruit." << endl;
    }

   
    virtual void showTaste() = 0;


    virtual void showEatingMethod() = 0;
    
};


class Apple : public Fruit {
public:
    void showTaste() override {
        cout << "The taste of an apple is sweet and slightly tart." << endl;
    }

    
    void showEatingMethod()  override {
        cout << "Apples are usually eaten fresh or used in cooking and baking." << endl;
    }

   
    void showDetails() override {
        Fruit::showDetails(); 
        cout << "This is an apple, and it can be red, green, or yellow." << endl;
    }
};


class Banana : public Fruit {
public:
    
    void showTaste()  override {
        cout << "The taste of a banana is sweet and creamy." << endl;
    }

  
    void showEatingMethod()  override {
        cout << "Bananas are usually eaten fresh or used in smoothies and baking." << endl;
    }

    
    void showDetails()  override {
        Fruit::showDetails(); // Call the base class method
        cout << "This is a banana, and it is typically yellow when ripe." << endl;
    }
};

int main() {
    
    Apple myApple;
    Banana myBanana;

    
    Fruit* fruits[2];
    fruits[0] = &myApple;
    fruits[1] = &myBanana;

    
    for (int i = 0; i < 2; ++i) {
        fruits[i]->showDetails();
        fruits[i]->showTaste();
        fruits[i]->showEatingMethod();
        cout << endl; 
    }

    return 0;
}
