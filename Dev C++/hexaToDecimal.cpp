
#include<bits/stdc++.h>
using namespace std;
int hexatoDecimal(string n)
{
	int x=1;int sum=0;
	int l=n.size();
	for(int i=l-1;i>=0;i--)
	{
		if(n[i]>='0' &&n[i]<='9' )
		{
			sum+=x*(n[i]-'0');
		}
		if(n[i]>='A' && n[i]<='F')
		{
			sum+=x*(n[i]-'A'+10);
		}
		x*=16;
	}
	return sum;
}
int main()

{
	string n;
	cin>>n;
	cout<<hexatoDecimal(n);
}