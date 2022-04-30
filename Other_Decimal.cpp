#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Decimal number= ";
    cin>>n;
    int ch;
    cout<<"1-Binary"
        <<"2-Octal"
        <<"3-Hexa-Decimal";
    cin>>ch;
    switch (ch)
    {
    case 1:
    {
        int x=1;
        int binary=0;
        while (n>0)
        {
            int r=n%10;
            binary+=r*x;
            x*=2;
            n/=10;
        }
        cout<<"Binary Equivalent= "<<binary<<endl;
        break;
    }
    case 2:
    {
    int x=1;
        int octal=0;
        while (n>0)
        {
            int r=n%10;
            octal+=r*x;
            x*=8;
            n/=10;
        }
        cout<<"Octal Equivalent= "<<octal<<endl;
    break;
    }
    case 3:
    {
        
    }
    default:
    {
        cout<<"Not A case";
    }
        break;
    }

}