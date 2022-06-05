#include<iostream>
using namespace std;
class complex
{
private:
    int a;
    int b;
public:
void setdata(int x,int y)
{
    a=x;
    b=y;
}
void getdata()
{
    cout<<"The No is ="<<a<<" + "<<b<<"i"<<endl;
}
void sum(complex o1,complex o2)
{
    a=o1.a+o2.a;
    b=o1.b+o2.b;
}
    
}c1,c2,c3;



int main()
{
c1.setdata(12,10);
c1.getdata();


c2.setdata(10,12);
c2.getdata();

c3.sum(c1,c2);
c3.getdata();



return 0;
}