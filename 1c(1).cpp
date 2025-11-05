#include<iostream>
using namespace std;
int x=100;
void test()
{
	
	int x=50;
	cout<<"local ="<<x<<endl ;
	cout<<"global ="<<::x;
}
int main()
{
	test();
	return 0;
}
