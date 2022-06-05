#include<iostream>
#include<cmath>
using namespace std;
void evenodd(int n)
{
	if(n%2==0)
	cout<<"Even"<<endl;
	else
	cout<<"Odd"<<endl;
}
void prime(int n)
{
	int i;
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
		cout<<"Not Prime"<<endl;
		break;
	    }
	}
	    if(i==n)
	cout<<"Prime"<<endl;

}
void armstrong(int n)
{
	int sum=0,r,no=n;
	while(n>0){
	r=n%10;
	sum=sum+pow(r,3);
	n=n/10;
}
	if(sum==no)
	
		cout<<"Armstrong Number";
	
	else
	cout<<"Not Armstrong Number";

}
int main()
{
	int n;
	cout<<"Enter Any Number ";
	cin>>n;
	evenodd(n);
	prime(n);
	armstrong(n);
}