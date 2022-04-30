#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"1st number = "<<a<<endl
    <<"2nd Number ="<<b<<endl;
}
void swap2(int *a,int *b)
{
    int *temp=a;
    a=b;
    b=temp;
    cout<<"1st number = "<<*a<<endl
    <<"2nd Number ="<<*b<<endl;
}
void swap3(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"1st number = "<<a<<endl
    <<"2nd Number ="<<b<<endl;
}
int main()
{
    int x,y;
cout<<"Enter Two Numbers= ";
cin>>x>>y;
swap(x,y);
int *p1,*p2;
// p1=&x;
// p2=&y;
swap2(&x,&y);
swap3(x,y);

return 0;
}