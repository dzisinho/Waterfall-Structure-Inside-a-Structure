
#include <iostream>
using namespace std;

class Car {
    string brand;
    int speed;
public:
    Car(string b) : Car(b, 0) {}  
    Car(string b, int s) : brand(b), speed(s) {}

    void show() { cout << brand << " is driving at " << speed << " km/h\n"; }
};

int main() {
    Car car1("BMW"), car2("Tesla", 120);
    car1.show();
    car2.show();
}
