#include<iostream>
using namespace std;
int main()
{
int arr[5];
for (int  i = 0; i < 5; i++)
{
    cout<<"Enter Id no. = ";
    cin>>arr[i];
    /* code */
}
cout<<endl;
int *p=arr;
cout<<"pointer "<<endl;
cout<<p<<endl;
cout<<&arr<<endl;
cout<<"value"<<endl;
for (int  i = 0; i < 5; i++)
{
  
cout<<*p++<<endl;  
}




return 0;
}