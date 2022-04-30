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
	int n,key;
	cout<<"Enter the no of element ";
	cin>>n;
	int arr[n];
	cout<<"Enter the Elements of the Array= ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter The Number to be searched ";
	cin>>key;
	int a=bs(arr,n,key);
	if(a>=0)
	{
		cout<<"Search Successfull at position "<<a;
	}
	else if(a==-1){
	cout<<"Not found "<<endl;
}


}