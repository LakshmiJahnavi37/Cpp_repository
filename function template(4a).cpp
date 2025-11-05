#include <iostream>
using namespace std;

// Function Template
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Maximum of 10 and 20 is: " << findMax(10, 20) << endl;
    cout << "Maximum of 5.6 and 3.9 is: " << findMax(5.6, 3.9) << endl;
    cout << "Maximum of 'A' and 'Z' is: " << findMax('A', 'Z') << endl;
    return 0;
}

