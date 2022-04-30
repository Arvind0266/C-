#include<iostream>
using namespace std;
int fact(int n)
{
	int factorial=1;
	for(int i=2;i<=n;i++)
	{
		factorial*=i;
	}
	return factorial;
}
int ncr(int n,int r)
{
	int a;
	a=fact(n)/((fact(n-r)*fact(r)));
	return a;
}
int main()
{
	int n;
	cout<<"Enter The Range= ";
	cin>>n;
	for(int i=0;i<=n-1;i++)
	{
		 for (int k = 0; k < n - i; k++)
        {
            cout << " ";
        }

		for(int j=0;j<=i;j++)
		{
			cout<<ncr(i,j)<<" ";
		}
	cout<<endl;
	}
}