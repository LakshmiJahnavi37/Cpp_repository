#include <iostream>
using namespace std;

class myclass {
public:
    void show();  // Function declaration
};

// Function definition outside main
void myclass::show() {
    cout << "Inside Show()";
}

int main() {
    myclass obj;   // Create an object
    obj.show();    // Call the member function
    return 0;
}

