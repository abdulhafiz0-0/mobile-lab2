#include <iostream>
using namespace std;

class Vehicle {
public:
    void startEngine() { cout << "Engine started\n"; }
};

class Car : public Vehicle {
public:
    void drive() { cout << "Car is driving\n"; }
};



// Q2:
// is-a = inheritance, has-a = composition

// Q3:
// Overriding = redefining base method; use `virtual`, `override`, `@Override`

// Q4:
// Diamond problem = shared base in multiple inheritance
// C++: use virtual inheritance, Java: uses interfaces only
