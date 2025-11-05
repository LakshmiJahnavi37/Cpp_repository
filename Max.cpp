#include<iostream>
using namespace std;
template <typename T1, typename T2>
class max_fun
{
	private:
		T1 a;
		T2 b;
	public:
		max_fun(T1 x,T2 y)
		{
			a = x;
			b = y;
		}
		auto max()
		{
			return (a>b?a:b);
		}
};
int main()
{
	max_fun <int,int> obj1(10.5,8);
	cout<<"Maximum of int , int = " <<obj1.max()<<endl;
	max_fun <int,float> obj2(10,8.0f);
	cout<<"Maximum of int , float = " <<obj2.max()<<endl;
	max_fun <double,int> obj3(100.0,8);
	cout<<"Maximum of double , int = " <<obj3.max()<<endl;
	
	return 0;	
	
}
