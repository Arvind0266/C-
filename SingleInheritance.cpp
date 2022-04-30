#include<iostream>
using namespace std;
class base
{
    protected:
    int data1;
    // void setdata();
    // int getdata1();
    public:
    int data2;
    void setdata();
    int getdata1();
};
void base::setdata()
{
    data1=10;
    data2=20;
}
int base::getdata1()
{
    return data1;
}

class derived :public base
{
    int data3;
    public:
    void process();
    void display();
};
void derived::process()
{
    data3=data1*data2;

}
void derived ::display()
{
  
 cout << "Value of data 1 is " << getdata1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;

}
int main()
{
derived arvind;
arvind.setdata();
arvind.getdata1();
arvind.process();
arvind.display();
// arvind.getdata1();


return 0;
}