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
	int minn=INT_MAX;
	int maxn=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>maxn)
		{
			maxn=arr[i];
		}
	else	if(arr[i]<minn){

		minn=arr[i];
	}
	}
	cout<<"Max No= "<<maxn<<endl;
	cout<<"Min No= "<<minn<<endl;
}
	