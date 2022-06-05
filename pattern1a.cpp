#include<iostream>
using namespace std;
#define n 10
int main()
{
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= n; j++)
{
    /* code */
    if(j<=n-i)
    {
        cout<<"   ";
    }
    else
    cout<<" * ";
}

    /* code */cout<<endl;
}



return 0;
}