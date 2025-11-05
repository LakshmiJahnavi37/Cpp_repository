#include<iostream>
using namespace std;
class add1 {
public:
    void add(int a, int b) {
        cout << "The sum of two numbers is " << a + b << endl;
    }
    void add(int a, int b, int c) {
        cout << "The sum of three numbers is " << a + b + c << endl;
    }
    void add(int a, int b, int c, int d) {
        cout << "The sum of four numbers is " << a + b + c + d << endl;
    }
};

int main() {
    add1 a;
    a.add(15, 1);            
    a.add(15, 1, 1);         
    a.add(15, 1, 1, 1);      
    return 0;
}

