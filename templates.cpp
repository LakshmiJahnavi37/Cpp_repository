#include <iostream>
using namespace std;
template <typename T1, typename T2>
double add(T1 a, T2 b) {
    return a + b;
}
template <typename T3, typename T4>
double sub(T3 a, T4 b) {
    return a - b;
}
template <typename T5, typename T6>
double mul(T5 a, T6 b) {
    return a * b;
}
template <typename T7, typename T8>
double div(T7 a, T8 b) {
    return a / b;
}

int main() {
    cout << "Addition of int and int: " << add<int,int>(10, 8) << endl;
    cout << "Addition of int and float: " << add<int,float>(10, 8.0f) << endl;
    cout << "Addition of double and int: " << add<double,int>(10.0, 8) << endl;
    cout << "Addition of float and double: " << add<float,double>(2.2f, 15.8) << endl;
    cout << "Subtraction of int and int: " << sub<int,int>(10, 8) << endl;
    cout << "Subtraction of int and float: " << sub<int,float>(10, 8.0f) << endl;
    cout << "Subtraction of double and int: " << sub<double,int>(10.0, 8) << endl;
    cout << "Subtraction of float and double: " << sub<float,double>(2.2f, 15.8) << endl;
    cout << "Multiplication of int and int: " << mul<int,int>(10, 8) << endl;
    cout << "Multiplication of int and float: " << mul<int,float>(10, 8.0f) << endl;
    cout << "Multiplication of double and int: " << mul<double,int>(10.0, 8) << endl;
    cout << "Multiplication of float and double: " << mul<float,double>(2.2f, 15.8) << endl;
    cout << "Division of int and int: " << div<int,int>(10, 8) << endl;
    cout << "Division of int and float: " << div<int,float>(10, 8.0f) << endl;
    cout << "Division of double and int: " << div<double,int>(10.0, 8) << endl;
    cout << "Division of float and double: " << div<float,double>(2.2f, 15.8) << endl;

    return 0;
}

