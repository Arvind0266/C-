#include<iostream>
#include<math.h>
using namespace std;
int NoOfDigits(int n)
{
	int count=0;
	while(n>0)
	{
		int r=n%10;
		count++;
		n/=10;
	}
	return count;
}
int main()
{
	int n,decimal=0;
	cout<<"Enter A Number In Binary= ";
	cin>>n;
	int a=NoOfDigits(n);
	
	for(int i=0;i<a;i++)
	{
		int r=n%10;
		decimal+=r*pow(2,i);
		n/=10;
	}
	cout<<decimal;
}