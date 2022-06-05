#include<iostream>
using namespace std;
int bs(int arr[],int n,int key)
{
	int s=0,e=n;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if(arr[mid]==key)
	{
		return mid;
	}
	else
	if(arr[mid]>key)
{
	e=mid-1;
	
	}
	else
	{
		s=mid+1;
		}	
	}
	return -1;
}
int main()
{
	int n;int key;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>key;
	int a=bs(arr,n,key);
	if(a>=0)
	cout<<a;
	else if(a==-1)
cout<<"Null";
	return 0;
}