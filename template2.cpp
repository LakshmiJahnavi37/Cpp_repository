#include<iostream>
#include<string>
using namespace std;

template <typename T>
T max(T a, T b)
{
    return (a > b ? a : b);
}

int main()
{
    cout << "Maximum number in integers " << max(10, 18) << endl;
    cout << "Maximum number in float " << max(10.1, 18.0) << endl;
    cout << "Maximum string " << max(string("Virat"), string("Dhon")) << endl;

    return 0;
}

