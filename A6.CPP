#include<iostream>
using namespace std;
int main()
{
int a=10;
int *b=&a;
cout<<&a<<endl;
cout<<b<<endl;
cout<<*b<<endl;
int **c=&b;
cout<<b<<endl;
cout<<&b<<endl;
cout<<c<<endl;
cout<<*c<<endl;
cout<<**c<<endl;


return 0;
}