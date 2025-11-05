#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	cout << "enter a,b,c values";
	cin >> a >> b >>c;
	float d= ((b*b)-(4*a*c));
	if(d<0){
		cout << "Roots are complex"<<endl;
		float rp = (-b)/(2*a);
		float ip = sqrt(-d)/(2*a);
		cout << "roots are "<<rp<<"+" <<ip<<"i"<<endl;
		cout << "roots are "<<rp<<"-" <<ip<<"i"<<endl;
		
	}else if(d==0){
		float r=((-b)/(2*a));
		cout << "roots are "<<r<<r;
	}
	else{
		float r1=(-b+sqrt(d))/(2*a);
		float r2=(-b-sqrt(d))/(2*a);
		
		cout <<  r1 << endl;
		cout << r2;
		
	}
}


