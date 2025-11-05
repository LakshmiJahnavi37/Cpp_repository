#include<iostream>
using namespace std;
template <typename T>
T add(T a,T b)
{
	return a+b;
}
int main()
{
	cout<<"For integers numbers "<<add<int>(10,8)<<endl;
	cout<<"For Float numbers "<<add(10.1,7.9);
}
