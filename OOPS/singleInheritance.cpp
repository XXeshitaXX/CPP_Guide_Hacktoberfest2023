#include<bits/stdc++.h>
using namespace std;
//Base class
class Car{
    public:
    void start() {
        cout << "Car started." << endl;
    }
};
//Derived class
class Tesla : public Car{
    public:
    void drive() {
        cout << "Tesla is moving." << endl;
    }
};
  
//Driver code
int main(){
    // Create an object of the Car class
    Tesla myCar;

    // Access methods from both base and derived classes
    myCar.start(); // This method is inherited from the Vehicle class
    myCar.drive(); // This method is defined in the Car class

    return 0;

}