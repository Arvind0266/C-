#include<iostream>
using namespace std;
int main()
{
    int n,j;
    cout<<"Range = ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
       for (  j = 1; j <=n-i; j++)
       {
           cout<<" ";
       }
       for (; j <= n+i-1; j++)
       {
           cout<<"*";
       }
       cout<<endl;
    }
    for (int i = n; i >=1; i--)
    {
       for (  j = 1; j <=n-i; j++)
       {
           cout<<" ";
       }
       for (; j <= n+i-1; j++)
       {
           cout<<"*";
       }
       cout<<endl;
    }
    
    
}