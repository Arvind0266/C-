#include<iostream>
using namespace std;
#include<iomanip>
void swap(int &a, int &b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}
int main()
{
// float a=12.2f;
// long double b=12.234;
// double c=2323.2323;
// cout<<"  "<<sizeof(a)<<endl;
// cout<<"  "<<sizeof(b)<<endl;
// cout<<"  "<<sizeof(c)<<endl;
// cout<<setw(5)<<c<<endl;
// cout<<setw(60)<<b;

    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swap(x, y); 
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 

return 0;
}