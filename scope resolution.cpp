#include <iostream>
using namespace std;
int a = 100;  
int main() {
    int a = 50;  
    cout << "Local a = " << a << endl;   
    cout << "Global a = " << ::a << endl;  
    return 0;
}

