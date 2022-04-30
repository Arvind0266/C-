#include<iostream>
using namespace std;
int main()
{
    int n,j;
    cout<<"Range = ";
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
       for (  j = 0; j <=n-i; j++)
       {
           cout<<" ";
       }
       for (; j <= 2*i; j++)
       {
           cout<<"*";
       }
       cout<<endl;
    }
    
}