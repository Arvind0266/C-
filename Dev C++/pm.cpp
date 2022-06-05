#include<iostream>
using namespace std;
void fb(int n)
{
	int b=1;int a=0;
	int c;
	for(int i=1;i<=n;i++)
	{
	cout<<a<<" ";
	c=a+b;
	a=b;
	b=c;
		
	}
	return;
}
int main()
{
	int number;
	cout<<"Enter The Range= ";
	cin>>number;
	fb(number);

return 0;
}