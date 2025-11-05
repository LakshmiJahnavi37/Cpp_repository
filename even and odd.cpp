#include<iostream>
using namespace std;
int main()
{
	int a;
	int n;
	cin >> a;
	n=(a%2==0);
	if(a%2==0){
		cout << "Even" <<endl;
	}else{
		cout << "Odd"<<endl;
	}
	cout << n;
	return 0;
}

