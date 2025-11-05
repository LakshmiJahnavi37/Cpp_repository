#include<iostream>
using namespace std;
int v=50;
int x = 100; 
int main()
{
    int x = 50; 
    cout << "Local x: " << x << endl;
    cout << "Global x: " << ::x << endl; 
    cout << "Global v: " << ::v << endl; 
    return 0;
}
