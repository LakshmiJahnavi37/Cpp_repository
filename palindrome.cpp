#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "enter the number ";
	cin >> n;
	int rn=0;
	int temp = n;
	while(temp>0){
		int digit = temp%10;
		rn = rn*10+digit;
		temp = temp/10;
	}
	if (n==rn){
		cout << "Palindrome";
	}else{
		cout << "Not palindrome";
	}
	
}
