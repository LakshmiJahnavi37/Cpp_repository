#include <iostream>
using namespace std;

namespace Circle {
    const double PI = 3.14159;

    void area(double radius) {
        cout << "Area of Circle: " << PI * radius * radius << endl;
    }
}

namespace Square {
    void area(double side) {
        cout << "Area of Square: " << side * side << endl;
    }
}

int main() {
    Circle::area(5.0);  
    Square::area(4.0);  
    return 0;
}

