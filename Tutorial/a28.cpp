#include<iostream>
#include<cmath>
using namespace std;
class quad
{
    float a,b,c,d;
    double x1,x2;
    public:
    quad(float x,float y,float z)
    {
        a=x;
        b=y;
        c=z;
        d=0;
    }
    void calculate();

};
void quad::calculate()
{
    d=(b*b)-(4*a*c);
    if(d<0)
    {
        cout<<"Roots not possible ";
    }
    else{
        x1=(-b+sqrt(d))/2*a;
        x2=(-b-sqrt(d))/2*a;
        cout<<"Roots of the equation are : "<<x1<<" and "<<x2<<endl;
    }
}
int main()
{ float x,y,z;
cout<<"Enter the coefficient a,b and c of the quadratic equation ax^2+bx+c"<<endl;
cin>>x>>y>>z;
    
    quad arvind(x,y,z);
    arvind.calculate();



return 0;
}