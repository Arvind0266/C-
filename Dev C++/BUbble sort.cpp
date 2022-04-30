#include<iostream>
#define n 6
using namespace std;
int main()
{
	
	int arr[n]={20,10,5,40,60,1};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{	
			int temp=arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
		}

}

}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}


return 0;
}