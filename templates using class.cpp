#include<iostream>
using namespace std;
template<typename T>
class display1{
	T a;
	public:
		display1(T data){
			a=data;
		}
		void show()
		{
			cout<<a;
		}
};
int main()
{
	display<int> o1(6);
	display<float> o2(6.1);
	o1.show();
	o2.show();
}
