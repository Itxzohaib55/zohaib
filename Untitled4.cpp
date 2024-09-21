#include <iostream>

using namespace std;

class Employee {
public:
   
    virtual double calculateSalary() = 0;

    
};


class FullTimeEmployee : public Employee {
private:
    double annualSalary;

public:
  
    FullTimeEmployee(double salary) : annualSalary(salary) {}

    
    double calculateSalary()  override {
        return annualSalary;
    }
};


class PartTimeEmployee : public Employee {
private:
    double hourlyWage;
    int hoursWorked;

public:
    
    PartTimeEmployee(double wage, int hours) : hourlyWage(wage), hoursWorked(hours) {}

    
    double calculateSalary()  override {
        return hourlyWage * hoursWorked;
    }
};

int main() {
    
    FullTimeEmployee ftEmployee(60000); 
	    PartTimeEmployee ptEmployee(20, 120); 

   
    cout << "Full-time employee salary: $" << ftEmployee.calculateSalary() << endl;
    cout << "Part-time employee salary: $" << ptEmployee.calculateSalary() << endl;

    return 0;
}
