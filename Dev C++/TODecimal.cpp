#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n)
{
	int x=1,sum=0;
	while(n>0)
	{
		int r=n%10;
		sum+=r*x;
		x*=2;
		n/=10;
		
	}
	return sum;
}
int octalToDecimal(int n)
{
	int x=1,sum=0;
	while(n>0)
	{
		int r=n%10;
		sum+=r*x;
		x*=8;
		n/=10;
		
	}
	return sum;
}
int hexaToDecimal(string n)
{
	
	int sum=0,x=1;    int st=n.size();
    for(int i=st-1;i>=0;i--)
    {
    	if(n[i]>='0' && n[i]<='9')
    	{
    		sum+=x*(n[i]-'0');
		}
		else if(n[i]>='A' && n[i]<='F')
		{
			sum+=x*(n[i]-'A' + 10);
		}
		x*=16;
	}
	return sum;
	}
	
int main()
{
	int n;
	cout<<"Enter Any Number = ";
	cin>>n;
	cout<<"Binary To decimal"<<binaryToDecimal(n)<<endl;
cout<<"Octal To decimal"<<octalToDecimal(n)<<endl;
string no;
cin>>no;
cout<<"Hexa To decimal "<<hexaToDecimal(no)<<endl;
}
