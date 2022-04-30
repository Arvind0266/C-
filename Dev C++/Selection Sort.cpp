#include<iostream>
#define n 5
using namespace std;
int main()
{
	int arr[n]={20,10,5,40,60};

	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{	
			int temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
		}
	}
}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}


return 0;
}