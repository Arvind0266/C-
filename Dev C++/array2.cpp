#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int  n;
	cout<<"Enter Array Length";
	cin>>n;
	int arr[n];
	cout<<"Enter The Elements Of The Array= ";
	for(int i=0;i<=n-1;i++)
	{
		cin>>arr[i];
	}
	char key;int temp=0;
cout<<"Enter the number to be searched= ";
cin>>key;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(arr[j]=="key")
			{
				cout<<"Search Succcessfull";
			}
		}
		
	}

}