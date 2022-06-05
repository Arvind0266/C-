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
       for (; j <= 2*i; j++)
       {
           cout<<"*";
       }
       cout<<endl;
    }
    
}