#include<iostream>
using namespace std;
template <typename T1, typename T2>
class Adder
{
	private:
		T1 a;
		T2 b;
	public:
		Adder(T1 x,T2 y)
		{
			a = x;
			b = y;
		}
		auto add()
		{
			return a+b;
		}
};
int main()
{
	Adder <int,int> obj1(10,8);
	cout<<"Addition of int + int = " <<obj1.add()<<endl;
	Adder <int,float> obj2(10,8.0f);
	cout<<"Addition of int + float = " <<obj2.add()<<endl;
	Adder <double,int> obj3(10.0,8);
	cout<<"Addition of double + int = " <<obj3.add()<<endl;
	
	return 0;	
	
}
