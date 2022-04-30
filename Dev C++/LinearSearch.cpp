#include<iostream>
#include<climits>
using namespace std;
int linearSearch(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		
		if(arr[i]==key)
		return i;
	}
	return 0;
}
int main()
{
	int n;int key;
	cout<<"Enter The No of elements in array=";
	cin>>n;
	int arr[n];
	cout<<"Enter The Array Elements= ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter The No to Be searched=";
	cin>>key;
int a=linearSearch(arr,n,key);
if(a!=0)
cout<<"Search Successfull at"<<a;
else
cout<<"Not found"<<endl;
}