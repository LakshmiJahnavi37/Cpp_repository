#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter the number";
	cin >> n;
	int res=0;
	int temp=n;
	while(temp>0){
		int digit = temp%10;
	    res += digit*digit*digit;
	    temp = temp/10;
	}
	if(n==res){
		cout << "armstrong";
	}else{
		cout << "not armstrong";
	}
} 
