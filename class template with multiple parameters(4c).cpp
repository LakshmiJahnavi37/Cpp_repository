#include <iostream>
using namespace std;

// Template with multiple parameters
template <class T1, class T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Constructor
    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }

    // Member function
    void display() {
        cout << "Values are: " << first << " and " << second << endl;
    }
};

int main() {
    // Pair of int and double
    Pair<int, double> p1(10, 20.5);
    p1.display();

    // Pair of string and int
    Pair<string, int> p2("Age", 21);
    p2.display();

    // Pair of char and float
    Pair<char, float> p3('A', 99.9);
    p3.display();

    return 0;
}

