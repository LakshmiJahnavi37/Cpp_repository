#include <iostream>
using namespace std;

// Template Class
template <class T>
class Calculator {
private:
    T num1, num2;

public:
    // Constructor
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    // Member functions
    void add() {
        cout << "Addition: " << num1 + num2 << endl;
    }

    void subtract() {
        cout << "Subtraction: " << num1 - num2 << endl;
    }

    void multiply() {
        cout << "Multiplication: " << num1 * num2 << endl;
    }

    void divide() {
        if (num2 != 0)
            cout << "Division: " << num1 / num2 << endl;
        else
            cout << "Division by zero not possible!" << endl;
    }
};

int main() {
    // Integer Calculator
    Calculator<int> c1(10, 2);
    cout << "Integer Calculator Results:" << endl;
    c1.add();
    c1.subtract();
    c1.multiply();
    c1.divide();

    cout << endl;

    // Float Calculator
    Calculator<float> c2(5.5, 2.0);
    cout << "Float Calculator Results:" << endl;
    c2.add();
    c2.subtract();
    c2.multiply();
    c2.divide();

    return 0;
}

