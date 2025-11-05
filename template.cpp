#include<iostream>
using namespace std;
int max(int a,int b){
	return (a>b ?a:b);
}
float max(float a,float b){
	return (a>b ?a:b);
}
int main()
{
	cout <<max(2,5) <<endl;
	cout <<max(2.0,5.5) <<endl;
	
}
