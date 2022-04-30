#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter the range= ";
    cin >> n;
    int count = 0;
    int i,x=1;
    int sp=n;
    for (int j = 0; j < n; j++)
    {
        for (i = 0; i <sp; i++)
    {
        cout << " ";
    }
    sp--;
    x=1;
        for (int z=1; z <=count; z++)
        {
        x=x*11;
        }
         //cout<<x<<endl;
        while (x!=0)
        {
            int r=x%10;
            cout<<r<<" ";
            x=x/10;
        }
        
            cout<<endl;
            count++;
 //       }
    }
}