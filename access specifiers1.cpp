#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;
    Base() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void showBase() {
        cout << "Inside Base class:" << endl;
        cout << "Private Variable = " << privateVar << endl;
        cout << "Protected Variable = " << protectedVar << endl;
        cout << "Public Variable = " << publicVar << endl;
    }
};

class Derived : public Base {
public:
    void showDerived() {
        cout << "\nInside Derived class:" << endl;
           cout << "Protected Variable = " << protectedVar << endl;  
        cout << "Public Variable = " << publicVar << endl;       
    }
};

int main() {
    Derived obj;
    obj.showBase();    
    obj.showDerived(); 

    cout << "\nInside main function:" << endl;
    cout << "Public Variable = " << obj.publicVar << endl;  

    return 0;
}

