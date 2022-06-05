#include<iostream>
using namespace std;
inline factorial(int n)
{
    if(n<2)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int a;
    cout<<"Enter the number= ";
cin>>a;
cout<<"factorial= "<<factorial(a);


return 0;
}