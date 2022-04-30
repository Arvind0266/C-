#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
cout<<"Enter The size of the array= ";
cin>>n;
int arr[n];
cout<<"Enter "<<n<<" Number "<<endl;
for (int  i = 0; i < n; i++)
{
    cin>>arr[i];
}
int maxNo=INT_MIN;
int minNo=INT_MAX;
for (int  i = 0; i < n; i++)
{
    maxNo=max(maxNo,arr[i]);
    minNo=min(minNo,arr[i]);
}

cout<<"Maximum Number= "<<maxNo<<endl<<"Minimum Number ="<<minNo<<endl;



return 0;
}