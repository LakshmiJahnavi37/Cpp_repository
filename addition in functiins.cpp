#include<iostream>
using namespace std;
int addition(int a,int b){
	return a+b;
	
}
int main()
{
	int n1,n2;
	cin >> n1 >>n2;
	int sum=addition(n1,n2);
	cout << sum;
}
