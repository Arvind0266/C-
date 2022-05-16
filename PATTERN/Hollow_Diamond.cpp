#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the range= "<<endl;
    cin>>n;int j;
  for(int i=1;i<=n;i++)
 {
        for (j = 1; j <=n-i; j++)
        {
            cout<<" ";
        }
        
        for (j=1; j <=2*i-1; j++)
        {
            if(j==1 || j==2*i-1){
            cout<<"*";
            }
            else
            {
            cout<<" ";}
        }

        
        
    cout<<endl;
    }
    for(int i=n;i>=1;i--)
 {
        for (j = 1; j <=n-i; j++)
        {
            cout<<" ";
        }
        
        for (j=1; j <=2*i-1; j++)
        {
            if(j==1 || j==2*i-1){
            cout<<"*";
            }
            else
            {
            cout<<" ";}
        }

        
        
    cout<<endl;
    }
    
}