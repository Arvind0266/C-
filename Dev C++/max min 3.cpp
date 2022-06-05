#include<iostream>
using namespace std;
void max(int a,int b,int c)
{
	int max;
	if(a>b)
	{
		if(a>c)
		{
			max=a;
		}
		else
		max=c;
	}
	else if(b>a)
	{
		if(b>c)
		{
			max=b;
		}
		else
		max=c;
	}
	cout<<"Max No. ="<<max<<endl;
}
void min(int a,int b,int c)
{
	int min;
	if(a<b && a<c)
	{
		min=a;
	}
	if(b<a && b<c)
	{
		min=b;
	}
	else if(c<a && c<b){
	min=c;
}
cout<<"Minimum No="<<min<<endl;
}
int main()
{
	int a,b,c;
	cout<<"Enter any three different number = ";
	cin>>a>>b>>c;
max(a,b,c);
min(a,b,c);
}