#include<iostream>
using namespace std;
int main()
{
	int n;
	int count=0;
	cout << "enter the number ";
	cin >> n;
	if(n==0 || n==1){
		cout << " NOT PRIME NUMBER";
	}else{
	
	for(int i=2;i<=n;i++){
		if(n%i==0){
			++count;
		
		}
		
	}
	if(count==1){
		cout << n << " is a prime number " << endl;
	}else{
		cout << n<< " is not a prime number";
	}
}
}


