#include<iostream>
using namespace std;
int linearSearch(int no,int arr[],int key)
{
	for(int i=0;i<no;i++)
	{
		if(arr[i]==key)
		{
		return i;
	}
		
	}
return 0;
}
int main()
{
	int n;
	cout<<"Enter The No of element in the arra";
	cin>>n;
	int arr[n];
	cout<<"Enter The array Elements ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key;
	cout<<"Enter The Number To be searched ";
	cin>>key;
	int a=linearSearch(n,arr,key);
	if(a>0)
	cout<<key<<" is present at position "<<a<<endl;
	else if(a=0)
	cout<<key<<" is not present in the array "<<endl;
	
}