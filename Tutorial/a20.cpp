#include<iostream>
using namespace std;
class complex
{
    int a,b;
    friend  void sumComplex(complex o1,complex o2);
    public:
    void setdata(int x,int y)
    {
        a=x;b=y;
    }
    void getdata()
    {
        cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
    }

    
};
void sumComplex(complex o1, complex o2){
   a=o1.a+o2.a;
    b=o1.b+o2.b;
   
}
int main()
{
    complex c1,c2,c3;
    c1.setdata(12,10);
    c1.getdata();

c2.setdata();
c2.getdata();

sumComplex(c1,c2);
getdata();



return 0;
}