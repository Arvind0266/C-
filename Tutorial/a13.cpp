#include<iostream>
using namespace std;
class arvind
{
int a,b,c;
public:
int d,e;
void getdata(int a1,int a2,int a3);
void showdata()
{
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"c= "<<c<<endl;
    cout<<"d= "<<d<<endl;
    cout<<"e= "<<e<<endl;
    

}
}arvi;
void arvind :: getdata(int a1,int a2,int a3)
{
    a=a1;
    b=a2;
    c=a3;

}
int main()
{


arvi.d=15;
arvi.e=23;
arvi.getdata(12,13,14);
arvi.showdata();


return 0;
}