#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
	int lb,ub,mid;
	lb=0;ub=n;

	while(lb<=ub)
	{
			mid=(lb+ub)/2;
		if(arr[mid]==key)
		{
		return mid;

	}
	else	if(arr[mid]<n)
		{
			lb=mid+1;
		}
else	if(arr[mid]>n)
	{
		ub=mid-1;
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
	int a=BinarySearch(arr,n,key);
	if(a>=0)
	{
		cout<<"Search Successfull at position "<<a;
	}
	else if(a==-1){
	cout<<"Not found "<<endl;
}
return 0;
}