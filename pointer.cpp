#include<iostream>
using namespace std;

int main()
{
double a=1.0;
int b=20;
string s="fdf";
double *ptr=&a;
int *p=&b;
string *st=&s;
cout<<&a<<endl;
cout<<&b<<endl;
cout<<&s<<endl;
cout<<ptr<<endl;
cout<<p<<endl;
cout<<st<<endl;
cout<<"End"<<endl;

int *arr= new int[3];
arr[0]=12;
arr[1]=24;
arr[2]=36;
delete arr;
for (int i = 0; i < 3; i++)
{
    /* code */cout<<"The address at arr["<<i<<"] is "<<arr[i]<<endl;
}

return 0;
}