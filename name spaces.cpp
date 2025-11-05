#include<iostream>
using namespace std;

namespace A {
    int x = 10;
    void display() {
        cout << "Namespace A, x = " << x << endl;
    }
}

namespace B {
    int x = 20;
    void display() {
        cout << "Namespace B, x = " << x << endl;
    }
}

int main() {
    A::display();  
    B::display();  

    cout << "A::x = " << A::x << endl;
    cout << "B::x = " << B::x << endl;

    return 0;
}

