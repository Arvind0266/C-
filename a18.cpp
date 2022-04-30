#include<iostream>
using namespace std;
class arvi
{
    int a,b;
    public:
    int c,d;
    friend int get();
    
}a;
int get()
{
    a.a=10;
    a.b=20;
    int sum=a.a+a.b;
    return sum;
}
int main()
{
int c=get();
cout<<"sum= "<<c;



return 0;
}