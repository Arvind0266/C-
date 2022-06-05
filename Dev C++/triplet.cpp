#include<iostream>
#include<cmath>
using namespace std;
void triplet(int x,int y,int z)
{
	int a,b,c;
	a=max(x,max(y,z));
	if(a==x)
	{
	 b=y;c=z;	
	}
	else if(a==y)
	{
		b=x;
		c=z;
	}
	else if(a==z)
	{
		b=y;c=x;
	}
	if(a*a==b*b+c*c)
	{
	cout<<"Pythagorean Triplet";
	}
	else{
	cout<<" Not Pythagorean Triplet";
}
}
int main()
{
	int x,y,z;
	cout<<"Enter 3 number= ";
	cin>>x>>y>>z;
	triplet(x,y,z);
}