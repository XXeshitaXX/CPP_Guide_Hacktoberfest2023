#include<bits/stdc++.h>
using namespace std;
//Base class
class Car{
    public:
    void start() {
        cout << "Vehicle started." << endl;
    }
};
//Derived class
class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is moving." << endl;
    }
};
  
//Driver code
int main(){
    // Create an object of the Car class
    Car myCar;

    // Access methods from both base and derived classes
    myCar.start(); // This method is inherited from the Vehicle class
    myCar.drive(); // This method is defined in the Car class

    return 0;

}