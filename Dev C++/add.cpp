#include<iostream>
using namespace std;

int add(int a,int b)
{
	int sum=a+b;
	return sum;
}
int main()
{
	int n1,n2;
	cout<<"Enter Any 2 Number= ";
	cin>>n1>>n2;
	cout<<"Sum of "<<n1<<" & "<<n2<<" is "<<add(n1,n2);
}