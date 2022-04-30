#include<iostream>
using namespace std;
class complex
{
  int a,b;
  public:
  complex();
  void printdata();
};
complex::complex()
{
    cout<<"Enter real value = ";
    cin>>a;
    cout<<"Enter imaginary value= ";
    cin>>b;
}
void complex::printdata()
{
    cout<<"the complex no is = "<<a<<" + "<<b<<"i"<<endl;
}
int main()
{
complex c1;
c1.printdata();


return 0;
}