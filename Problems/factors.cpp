#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <n; i++)
    {
        for (int j = i; j<n; j++)
        {
            if(i*j==n){
            cout<<i<<"X"<<j<<endl;
        }
            else
            for (int k = j; k < n; k++)
            {
                if(i*j*k==n)
                cout<<i<<"X"<<j<<"X"<<k<<endl;
            }
            
        }
        
    }
    
}
